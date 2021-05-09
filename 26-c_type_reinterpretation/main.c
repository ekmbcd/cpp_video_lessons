#include <stdio.h>

int main()
{
	float	a = 42.042f;				// reference value

	// reinterpretation means bits stay the same (lossless)
	// void is more general than float

	// we reinterpret the address of a float (it stays the same)
	void *	b = &a;						// implicit reinterepretation cast
	void *	c = (void *)&a;				// explicit reinterepretation cast

	void *	d = &a;						// implicit promotion -> Ok
	int *	e = d;						// implicit demotion -> Dangerous (bits have different meaning)
	int *	f = (int *)d;				// explicit demotion -> At least you know what you are doing

	printf("%p - %f\n", &a, a);

	printf("%p\n", b);
	printf("%p\n", c);

	printf("%p\n", d);
	printf("%p - %d\n", e, *e);
	printf("%p - %d\n", f, *f);



}