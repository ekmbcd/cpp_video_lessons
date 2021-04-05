#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

void byPtr(string *str)
{
	*str += " and ponies";
}

void byConstPtr(string const *str)
{
	cout << *str << endl;
}

void byRef(string &str)
{
	str += " and ponies";			// we modify the string in the main
}

void byConstRef(string const &str)
{
	cout << str << endl;
}

int main()
{
	std::string str = "i like butterflies";

	cout << str << endl;

	byPtr(&str);				// if a function expects a pointer, pass the address
	byConstPtr(&str);

	str = "i like otters";

	cout << str << endl;

	byRef(str);					// if a function expects a reference, pass the variable
	byConstRef(str);

	return (0);

}