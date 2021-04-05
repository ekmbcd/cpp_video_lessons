#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

// instance (member) attributes are relative to each member
// class (non member) attributes are shared between all instances of the class
class Sample
{
public:

	Sample(void);
	~Sample(void);

	// non member function (static)
	static int	getnbInst(void);

private:

	// non member attribute (static)
	static int 	_nbInst;		// counts how many instances of the class have been made

};

#endif