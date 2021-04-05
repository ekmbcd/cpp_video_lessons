#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
// public and private control encapsulation of the members of the class

// public attributes and methods are accessible and visible from inside and outside the class
public:

	int		publicfoo;

	Sample(void);
	~Sample(void);

	void	publibar(void) const;

// private attributes and methods are only accessible and visible from inside the class
private:

	// use "_" prefix for all private identifiers
	int 	_privatefoo;

	void	_privatebar(void) const;

};

#endif