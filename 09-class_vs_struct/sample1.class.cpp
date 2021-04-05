#include <iostream>
#include "sample1.class.hpp"

Sample1::Sample1(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
