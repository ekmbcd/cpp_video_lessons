#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	float const	pi;
	int			qd;

	Sample(float const f);
	~Sample(void);

	// a const function will not alter the current instance
	// always define functions as const if they don't modify the object
	void bar(void) const;
};

#endif