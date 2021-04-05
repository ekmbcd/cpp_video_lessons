#include <iostream>
#include "sample.class.hpp"

// not assigning f to pi, but initializing pi
Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// const before brackets
void Sample::bar(void) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	//this->qd = 12;		can't write it
	return;
}