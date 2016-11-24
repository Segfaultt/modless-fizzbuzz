/*
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

#include <iostream>

int main(int argc, const char *argv[])
{
	int count, num = 1, fizz_count = 1, buzz_count = 1;
	if (argc == 1)
	count = atoi(argv[1]);//set the amount to print to first argument

	while ((num < count) || (argc < 1)) {//loop forever or for count
		if (fizz_count <= 2 && buzz_count <= 4) {//check if regular output
			std::cout<<num;
		} else {
			if (fizz_count > 2) {//check fizz counter
				std::cout<<"fizz";
				fizz_count = 0;
			}
			if (buzz_count > 4) {//check buzz counter
				std::cout<<"buzz";
				buzz_count = 0;
			}
		}
		//increase all counters
		num++;
		fizz_count++;
		buzz_count++;
		std::cout<<std::endl;//add line after each loop
	}
	return 0;
}
