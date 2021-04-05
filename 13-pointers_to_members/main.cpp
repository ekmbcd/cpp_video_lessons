#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample	instance1;
	Sample	instance2;
	Sample	*instancep = &instance1;			// basic pointer to an instance

	// Sample::*p means i'm declaring a pointer on an integer member of the Sample class
	// it is necessary if I want a pointer to a variable inside a class
	int		Sample::*p = NULL;

	// which foo is this p pointing to (instance1 or instance2)? we need to specify it later
	p = &Sample::foo;

	std::cout << "instance1.foo = " << instance1.foo << std::endl;
	instance1.*p = 21;			// ".*" operator: pointer p is relative to instance1 of class Sample
	std::cout << "instance1.foo = " << instance1.foo << std::endl;
	instancep->*p = 42;			// we can also use "->*" for pointers
	std::cout << "instance1.foo = " << instance1.foo << std::endl;
	instance2.*p = 69;			// here we use *p for instance2
	std::cout << "instance2.foo = " << instance2.foo << std::endl;
	std::cout << "instance1.foo = " << instance1.foo << std::endl;

	// same thing for a pointer to a function inside a class (remember const is part of the type)
	void	(Sample::*f)(void) const;

	f = &Sample::bar;

	(instance1.*f)();
	(instancep->*f)();

	return 0;
}
