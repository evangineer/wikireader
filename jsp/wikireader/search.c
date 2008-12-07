/*
 * binary search 
 * (C) Copyright 2008 OpenMoko, Inc.
 * Author: xiangfu liu <xiangfu@openmoko.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <t_services.h>
#include <tff.h>
#include <stdio.h>
#include <string.h>
#include "search.h"
#include "sample1.h"

FIL file_object;
char g_key[TITLECHARS];
int g_key_count = 0;

int split(char *source, char *word, char *sha1, char split_char)
{
	if (*source == 0 )
		return -1;

	while (*source != split_char)
                *(word++) = *(source++);
	*word='\0';

	source++;
        while (*source != 0)
                *(sha1++) = *(source++);
	*sha1='\0';

        return 0;
}

int scomp(const void *p, const void *q )
{
	return strcmp( (char*) p, (char*) q );
}

int display_array(char ** array, int n)
{
	syslog(LOG_INFO, "---------------------");
	int i=0;
	while (i<n && array[i][0] != '\0') {
		syslog(LOG_INFO, "%s", array[i]);
		i++;
	}
	return 0;
}

void init_g_result()
{
	int i=0;
	for (i=0; i<RESULTCOUNT; i++) 
		g_result[i][0] = '\0';
}

int binary_search (char *array[], int size, char *key)
{
	int left = 0;
	int right = size - 1;
	int middle, comp;
	while (left <= right) { 
		middle = (left + right) / 2;
		comp = scomp(key, array[middle]);
		if (comp == 0) 
			return middle;
		if (comp > 0)
			left = middle + 1;
		else 
			right = middle - 1;
	}
	return -1;
}

char ** lookup(char *key)
{
	char line[LINECHARS], title[TITLECHARS], hash[SHA1CHARS];
	int k = 0;
	switch (g_algorithm) {
	case 'L': /* here is linear search */
		syslog(LOG_INFO, "algorithm is linear search");
		while (fgets( line, LINECHARS, &file_object) != NULL) {
			split(line, title, hash, '-');
			int comp = scomp(key, title);
			if (comp == 0) {
				break;
			}
		}

		strcpy(g_result[0], line);
		char line_temp[LINECHARS];
		for (k = 1; k< RESULTCOUNT; k++) {
			if (fgets(line_temp, LINECHARS, &file_object) != NULL){
				strcpy(g_result[k], line_temp);
			} else {
				break;
			}
		}
		break;
	case 'B':
		syslog(LOG_INFO, "algorithm is binary search");
		break;
	default :
		syslog(LOG_INFO, "not select algorithm");
		break;
	}

	return (char **)g_result;
}

int set_key_and_search(char c)
{
	if (c != SERAIL_ENTER) {
		g_key[g_key_count] = c;
		g_key_count ++;
		syslog(LOG_INFO,"key is:%s", g_key);
		return 1;
	}
	syslog(LOG_INFO,"the search title is:%s", g_key);

	init_g_result();
	char ** r;

	SYSTIM begin_time;
	SYSTIM end_time;
	get_tim(&begin_time);
	r = lookup(g_key);
	get_tim(&end_time);
	syslog(LOG_INFO, "search time is: %d", end_time - begin_time);

	display_array(r, RESULTCOUNT);

	int i = 0;
	for (i=0; i< TITLECHARS; i++)
		g_key[i] = '\0';
	g_key_count = 0;

	syslog(LOG_INFO,"Done! Enter Title:");
	return 0;
}

int time_test()
{
	SYSTIM  start_time_1;
	SYSTIM  start_time_2;
	SYSTIM  stop_time_1;
	SYSTIM  stop_time_2;
	int i = 0;
	char t[2];
	t[0] = t[1] = '\0';
	get_tim(&start_time_1);
	for (i = 0; i < g_titles_count; i++) {
		char *title = g_titles[i];
		syslog(LOG_INFO, "time 2 title is:%s", title);
		get_tim(&start_time_2);
		lookup(title);
		get_tim(&stop_time_2);
		syslog(LOG_INFO, "time_2 over value is:%d", stop_time_2 - start_time_2);
	}
	get_tim(&stop_time_1);
	syslog(LOG_INFO, "time_all is:%d", stop_time_1 - start_time_1);
	return 0;
}

int search()
{
	char c = 'H';
        FRESULT result;

	ena_tex();
	while (1) {
		syscall(serial_rea_dat(TASK_PORTID, &c, 1));
		syslog(LOG_INFO, "%c", c);
		switch (c) {
		case 'H': {
			syslog(LOG_INFO, "search task starts.");
			syslog(LOG_INFO, "comand 'D':  test read");
			syslog(LOG_INFO, "comand 'F':  test fgets");
			syslog(LOG_INFO, "comand 'E':  exit task");
			syslog(LOG_INFO, "comand 'S':  test index");
			syslog(LOG_INFO, "comand 'T':  get the time of search all 60 titles");
			syslog(LOG_INFO, "comand 'L':  linear search");
			syslog(LOG_INFO, "comand 'B':  binary search");
			syslog(LOG_INFO, "comand 'H':  display help");
			syslog(LOG_INFO, "lowcase lettle:  title");
			break;
		}
		case 'D': {
			char tmp[512];
			int n, total = 0;

			result = f_open(&file_object, "/foo", FA_READ);
			syslog(LOG_INFO, "f_open result = %d", result);
			if (result != 0)
				break;

			syslog(LOG_INFO, "benchmark starting ...");
			do {
				result = f_read (&file_object, tmp, sizeof(tmp), &n);
				syslog(LOG_INFO, "f_read result = %d, n = %d", result, n);
				total += n;
			} while (result == 0 && n == sizeof(tmp));

			syslog(LOG_INFO, "done. %d bytes read", total);
       			break; 
		}
		case 'F': {
			result = f_open(&file_object, "/foo", FA_READ);
			syslog(LOG_INFO, "f_open result = %d", result);
			if (result != 0)
				break;

			char line[LINECHARS], title[TITLECHARS], hash[SHA1CHARS];
			syslog(LOG_INFO, "test fgets function");
			while (fgets(line, LINECHARS, &file_object) != NULL) {
				split(line, title, hash, '-');
				syslog(LOG_INFO, "line: %s", line);
			}
			syslog(LOG_INFO, "test over!");
       			break; 
		}
		case 'E':
			syslog(LOG_INFO, "exit search function.");
			return 0;
		case 'S':
			result = f_open(&file_object, "/index", FA_READ);
			syslog(LOG_INFO, "index file f_open result = %d", result);
			break;
		case 'T':
			time_test();
			break;
		case 'C':
			result = f_open(&file_object, "/foo", FA_READ);
			syslog(LOG_INFO, "foo file f_open result = %d", result);
			char ** temp_r;
			temp_r = lookup("ou");
			display_array(temp_r, RESULTCOUNT);
			break;
		case 'L':
		case 'B':
			g_algorithm = c;
			break;
		default:
			set_key_and_search(c);
			break;
		}
	}
	return 0;
}