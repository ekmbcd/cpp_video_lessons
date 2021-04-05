#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_foo = 0;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// the setter is not const
void Sample::setfoo(int v)
{
	// we can control how attributes get changed
	if (v >= 0)
		this->_foo = v;
	return;
}

// the getter is const
int Sample::getfoo(void) const
{
	return (this->_foo);
}