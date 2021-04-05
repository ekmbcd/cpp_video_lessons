#include <iostream>
#include <string>

using std::cout;
using std::string;

/*
	a reference is an "alias of a variable"
	it is a pointer that is constant and always derefenced (no need for *)
	a reference can't be void
*/

int main()
{
	int number_of_balls = 42;

	int *balls_ptr = &number_of_balls;		// * : pointer
	int &balls_ref = number_of_balls;		// & : reference
	// int &balls_ref2;						// doesn't compile. requires an inizialization

	cout << "pointer: " << *balls_ptr << std::endl;		// need to dereference the pointer
	cout << "reference: " << balls_ref << std::endl;	// don't dereference the reference

	*balls_ptr = 21;
	cout << "new number: " << number_of_balls << std::endl;

	balls_ref = 84;
	cout << "new number: " << number_of_balls << std::endl;

	return(0);
}