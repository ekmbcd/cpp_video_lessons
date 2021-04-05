#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

//the scope of a class is private by default
//classes define objects that can perform actions
class Sample1
{
	int		foo;

	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
};

#endif