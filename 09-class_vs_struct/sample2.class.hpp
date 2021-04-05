#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

//the scope of a struct is public by default
//structs are mostly used as "bundles of related things"
struct Sample2
{
	int		foo;

	Sample2(void);
	~Sample2(void);

	void	bar(void) const;
};

#endif