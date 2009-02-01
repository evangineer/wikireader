/*
 *  Copyright (c) 2009 Holger Hans Peter Freyther <zecke@openmoko.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WL_SEARCH_H
#define WL_SEARCH_H

/**
 * Initialize the search engine. Once.
 */
void search_init();

/**
 * For every new search call this
 */
void search_reset();

/**
 * Search for another char. It needs to be lower case
 */
void search_add(char c);

/**
 * Fetch the results.
 *
 * Get a result and consume.... book keeping is left
 * to the user. Null pointer returned at the end of the
 * search.
 */
char* search_fetch_result();

void search_print_stats();

#endif