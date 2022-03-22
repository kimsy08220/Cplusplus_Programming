#include <iostream>

int main()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++)
			std::cout << "*";
		std::cout << "\n";
	}

	//std::cout << "*\n**\n***\n****\n";
	return 0;
}