#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Student
{
	private:
		string _login;
		
	public:
		Student(string const &login) : _login(login) 
		{}

		string &getLoginRef()						// returns a reference
		{
			return (_login);
		}

		string const &getLoginRefConst() const		// returns a const reference
		{
			return (_login);
		}

		string *getLoginPtr()						// returns a pointer
		{
			return (&_login);
		}

		string const *getLoginPtrConst() const		// returns a const pointer
		{
			return (&_login);
		}
};

int main()
{
	Student			bob = Student("bob");
	Student const	jim = Student("jim");

	cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << endl;
	cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << endl;

	bob.getLoginRef() = "bobref";			// we can change a private variable with a reference
	cout << bob.getLoginRefConst() << endl;

	*(bob.getLoginPtr()) = "bobptr";		// also with a pointer
	cout << bob.getLoginRefConst() << endl;

	// jim.getLoginRef() = "impossible";	// can't modify constants
	// bob.getLoginRefConst() = "nope";

	/*
		if at any point a variable can "not exist" we need to use a pointer
		if we need to change the variable we are pointing to, we need to use a pointer
		in the other cases it's better to use references
	*/

	return(0);			
}