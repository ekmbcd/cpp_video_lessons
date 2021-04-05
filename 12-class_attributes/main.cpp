#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample instance1;
	Sample instance2;

	std::cout << "nbInst = " << instance1.getnbInst() << std::endl;
	std::cout << "nbInst = " << instance2.getnbInst() << std::endl;

	Sample instance3;
	Sample instance4;
	instance2.~Sample();
	
	std::cout << "nbInst = " << instance1.getnbInst() << std::endl;
	std::cout << "nbInst = " << instance4.getnbInst() << std::endl;

	return 0;
}
