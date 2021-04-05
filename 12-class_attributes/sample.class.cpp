#include <iostream>
#include "sample.class.hpp"

// initialize static (class) attribute
int		Sample::_nbInst = 0;

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	// use "Sample::" instead of "this->" because it's an class (non member) attribute
	Sample::_nbInst++;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;

	Sample::_nbInst--;

	return;
}

int Sample::getnbInst(void)
{
	// a non member function does not get passed the pointer to the instance, so can't use "this"
	return (Sample::_nbInst);
}
