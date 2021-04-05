#include <iostream>

int main()
{
	char buff[512];

	//endl = print newline
	std::cout << "Hello World!" << std::endl;

	std::cout << "Input a word: ";
	//cin does not malloc
	std::cin >> buff;
	std::cout << "You entered [" << buff << "]\n";
}