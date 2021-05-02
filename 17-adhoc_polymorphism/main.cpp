#include "Sample.class.hpp"

int main()
{
	Sample s;

	s.bar('c');
	s.bar(2);
	s.bar(4.2f);
	s.bar(s);
}