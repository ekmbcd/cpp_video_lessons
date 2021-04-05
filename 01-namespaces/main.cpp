#include <stdio.h>

int var = 1;
int f() { return 2;}

namespace Foo
{
	int var = 3;
	int f() { return 4;}
} // namespace foo

namespace Super_long_name
{
	int var = 5;
	int f() { return 6;}
} // namespace Bar

namespace Shrt = Super_long_name;

int main()
{
	printf("var		= [%d]\n", var);
	printf("f()		= [%d]\n", f());

	printf("Foo::var	= [%d]\n", Foo::var);
	printf("Foo::f()	= [%d]\n", Foo::f());

	printf("Shrt::var	= [%d]\n", Shrt::var);
	printf("Shrt::f()	= [%d]\n", Shrt::f());
}