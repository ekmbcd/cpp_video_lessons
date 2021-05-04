#ifndef HERITAGE_HPP
#define HERITAGE_HPP

#include <iostream>

// Animal is the parent class
class Animal
{
// private means only accessible from a member of the class (not a child)
private:
	std::string name;

// public means accessible from anywhere
public:
	Animal();
	Animal(Animal const &);
	Animal & operator = (Animal const &);
	~Animal();

	void run(int distance);

// protected means accessible from a member of the class or a child
protected:
	int _numberOfLegs;
};

// cat inherits from the animal = the cat is an animal
// public = encapsulation level of the inheritance, can also be private or protected
class Cat : public Animal
{
public:
	// when i create a cat, i have to instanciate an animal first
	Cat();
	Cat(Cat const &);
	Cat & operator = (Cat const &);
	~Cat();

	// method that only Cat has
	void scornSomeone(std::string const & target);
};

// classes can inherit from multiple parent classes
class Pony : public Animal
{
public:
	Pony();
	Pony(Pony const &);
	Pony & operator = (Pony const &);
	~Pony();

	// method that only Pony has
	void doMagic(std::string const & target);
	// the Pony run replaces the Animal::run in the Pony class
	void run(int distance);
};

#endif
