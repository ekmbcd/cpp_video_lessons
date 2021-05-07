#include <stdexcept>
#include <iostream>

void test1()
{
	try
	{
		// do some stuff
		if (/*there is an error */)
		{
			// throw goes to catch block
			throw std::exception();
		}
		else
		{
			// do other stuff
		}
	}
	catch(const std::exception e)
	{
		// handle error here
		std::cerr << e.what() << '\n';
	}	
}

void test2()
{
	// do some stuff
	if (/*there is an error */)
	{
		throw std::exception();
	}
	else
	{
		// do other stuff
	}
}

void test3()
{
	try
	{
		test2();
	}
	// the catch block can be in the calling function
	// you can catch exception as a reference
	catch (std::exception& e)
	{
		//manage error
	}
}

void test4()
{
	// the class inherits from exception
	class PEBKACException : public std::exception
	{
		public:
			// throw in the declaration means that the function throws an exception
			virtual const char * what() const throw()
			{
				return ("Problem exists between computer and chair");
			}
	};

	try
	{
		test3();
	}
	// we can catch different types of error
	// specific catch
	catch(PEBKACException& e)
	{
		// handle the fact that user is an idiot
		std::cerr << e.what() << '\n';
	}
	// generic catch
	catch(std::exception& e)
	{
		// handle the exceptions like std::exception
	}
}