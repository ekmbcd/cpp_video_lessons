#include <stdio.h>


// in c we need different functions for different inputs
int max_int(int x, int y) { return x >= y ? x : y; }
float max_float(float x, float y) { return x >= y ? x : y; }
char max_char(char x, char y) { return x >= y ? x : y; }

// the same happens if we want to create the same struct with different inputs
// we would need to use void * (but unreferencing takes some time)

// or we could use a parametric macro
#define max(x, y)	( ((x) >= (y)) ? (x) : (y))

// the c preprocessor finds # and replaces macros in the code

int foo( int x) { printf("long computing time...\n"); return x; }

int main()
{
	int a = 21;
	int b = 42;

	printf ("max = %d\n", max_int(a, b));
	printf ("max = %d\n", max(a, b));

	float c = -1.7f;
	float d = 4.2f;

	printf ("\nmax = %f\n", max_float(c, d));
	printf ("max = %f\n", max(c, d));

	printf("\n");

	// the macro calls the foo function one more time 
	// (every time we see x or y in the macro)
	printf("max = %d\n", max_int(foo(a), foo(b)));
	printf("\n");

	printf("max = %d\n", max(foo(a), foo(b)));


}