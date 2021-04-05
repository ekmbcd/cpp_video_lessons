#include "sample.class.hpp"
#include <iostream>

int main()
{
	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance1 and instance1 are physically equal\n";
	else
		std::cout << "instance1 and instance1 are physically different\n";

	if (&instance1 == &instance2)
		std::cout << "instance1 and instance2 are physically equal\n";
	else
		std::cout << "instance1 and instance2 are physically different\n";


	if (instance1.compare(&instance1) == 0)
		std::cout << "instance1 and instance1 are structurally equal\n";
	else
		std::cout << "instance1 and instance1 are structurally different\n";

	if (instance1.compare(&instance2) == 0)
		std::cout << "instance1 and instance2 are structurally equal\n";
	else
		std::cout << "instance1 and instance2 are structurally different\n";


	if (instance1 == instance2)
		std::cout << "instance1 and instance2 are structurally equal (operator overload)\n";
	else
		std::cout << "instance1 and instance2 are structurally differentequal (operator overload)\n";
	
	return 0;
}
