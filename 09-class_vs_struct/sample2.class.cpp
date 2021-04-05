#include <iostream>
#include "sample2.class.hpp"

Sample2::Sample2(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
