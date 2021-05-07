#include <iostream>

class Cat
{
public:
	class Leg
	{
		//[...]
	};
};

class Dog
{
public:
	// the Dog's Leg is different than the cat's
	class Leg
	{
		//[...]
	};
};

int main()
{
	Cat cat;
	// nested classes works like namespaces
	Cat::Leg catleg;
}