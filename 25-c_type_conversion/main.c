int main()
{
	int		a = 42;					// reference value

	double	b = a;					// implicit conversion cast
	double	c = (double)a;			// explicit conversion cast

	// double has more precision than integer

	double	d = a;					// implicit promotion -> Ok
	int		e = d;					// implicit demotion -> Dangerous (you may forget the accuracy loss)
	int		f = (int)d;				// explicit demotion -> You know what you are doing


}