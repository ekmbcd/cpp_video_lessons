#include <iostream>
#include "sample2.class.hpp"

//inizialization list
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;

	std::cout << "a1 = " << this->a1 << "\na2 = " << this->a2 << "\na3 = " << this->a3 << std::endl;
	return;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
