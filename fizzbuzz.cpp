#include <iostream>

int main(int argc, const char *argv[])
{
	int count, num = 1, fizz_count = 1, buzz_count = 1;
	if (argc == 1) //if no time is specified then loop endlessly
	count = -1;
	else
	count = atoi(argv[1]);

	while ((num < count) || (count == -1)) {
		if (fizz_count <= 2 && buzz_count <= 4) {
			std::cout<<num;
		} else {
			if (fizz_count > 2) {
				std::cout<<"fizz";
				fizz_count = 0;
			}
			if (buzz_count > 4) {
				std::cout<<"buzz";
				buzz_count = 0;
			}
		}
		num++;
		fizz_count++;
		buzz_count++;
		std::cout<<std::endl;
	}

	return 0;
}
