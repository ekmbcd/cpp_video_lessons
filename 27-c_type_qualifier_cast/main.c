#include <stdio.h>

int main()
{
	int			a = 42;					// reference value

	// const is more accurate

	int const *	b = &a;					// implicit type qualifier cast
	int const *	c = (int const *)&a;	// explicit type qualifier cast

	int const *	d = &a;					// implicit promotion -> Ok
	int *		e = d;					// implicit demotion -> Will not compile (warning)
	int *		f = (int *)d;			// explicit demotion -> At least you know what you are doing

	(*f) += 1;							// you can actually change a const

	printf("%d\n", *f);

}