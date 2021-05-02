#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{

public:
	// ad-hoc polymorphism:
	// same function name, different parameters for each overload
	void	bar(char c) const;
	void	bar(int n) const;
	void	bar(float z) const;
	void	bar(Sample & i) const;
};

#endif