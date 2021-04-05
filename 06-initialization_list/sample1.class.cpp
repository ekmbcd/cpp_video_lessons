#include <iostream>
#include "sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	// this is the wrong way to initialize variables. use inizialization list instead
	this->a1 = p1;
	this->a2 = p2;
	this->a3 = p3;

	std::cout << "a1 = " << this->a1 << "\na2 = " << this->a2 << "\na3 = " << this->a3 << std::endl;
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
