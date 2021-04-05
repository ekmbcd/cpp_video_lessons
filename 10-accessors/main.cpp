#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample instance;

	instance.setfoo(42);
	std::cout << "instance._foo = " << instance.getfoo() << std::endl;
	
	instance.setfoo(-12);
	std::cout << "instance._foo = " << instance.getfoo() << std::endl;
	
	return 0;
}
