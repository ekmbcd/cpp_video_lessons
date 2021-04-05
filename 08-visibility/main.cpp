#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample instance;

	// can only access public attributes and methods from outside the class
	instance.publicfoo = 42;
	instance.publibar();
	return 0;
}
