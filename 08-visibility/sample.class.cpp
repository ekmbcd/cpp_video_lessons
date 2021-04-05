#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicfoo = 0;
	this->_privatefoo = 0;

	std::cout << "publicfoo	= " << this->publicfoo << "\n_privatefoo	= " << this->_privatefoo << std::endl;

	// we can call private and public functions from the constructor
	this->publibar();
	this->_privatebar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::publibar(void) const
{
	std::cout << "member function publibar called\n";
	return;
}

void Sample::_privatebar(void) const
{
	std::cout << "member function _privatebar called\n";
	return;
}