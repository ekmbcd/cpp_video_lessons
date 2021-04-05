#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar(void)
{
	std::cout << "Member function bar called\n";
	return;
}