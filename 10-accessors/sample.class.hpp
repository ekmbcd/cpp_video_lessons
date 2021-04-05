#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	Sample(void);
	~Sample(void);

	// getters and setters are accessors, or "proxy functions", the interface between the user and private attributes
	int		getfoo(void) const;
	void	setfoo(int v);

private:

	int 	_foo;

};

#endif