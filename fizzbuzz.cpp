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
