/*
    e07 bootloader suite
    Copyright (c) 2009 Christopher Hall <hsw@openmoko.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define APPLICATION_TITLE "hello world"
#define APPLICATION_TITLE2 "hello you"
#define APPLICATION_TITLE3 "hello me"

#include "application.h"

int x = 0xcafedeca;
unsigned char c = 2;
int y;
unsigned char d;

// this must be the first executable code as the loader executes from the first program address
ReturnType hello(int block, int status)
{
	APPLICATION_INITIALISE();

	print("hello world\n");

	print(" status = ");
	print_dec32(status);
	print_char('\n');

	print(" 1 + 2 = ");
	print_dec32(1 + 2);
	print_char('\n');
	{
		print(" x = ");
		print_u32((u32)&x);
		print_char(':');
		print_u32(x);
		print_char('\n');
		print(" y = ");
		print_u32((u32)&y);
		print_char(':');
		print_u32(y);
		print_char('\n');
	}

	print("goodbye world\n");

	APPLICATION_FINALISE(0, 0);
}
