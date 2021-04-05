#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample instance;

	instance.foo = 42;
	std::cout << "instance foo = [" << instance.foo << "]\n";
	instance.bar();
	return 0;
}
