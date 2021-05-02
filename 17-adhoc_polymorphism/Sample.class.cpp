#include "Sample.class.hpp"

void Sample::bar(char c) const
{
	std::cout << "Member function bar called with char overload" << std::endl;
}

void Sample::bar(float z) const
{
	std::cout << "Member function bar called with float overload" << std::endl;
}

void Sample::bar(int n) const
{
	std::cout << "Member function bar called with int overload" << std::endl;
}

void Sample::bar(Sample & i) const
{
	std::cout << "Member function bar called with Sample overload" << std::endl;
}