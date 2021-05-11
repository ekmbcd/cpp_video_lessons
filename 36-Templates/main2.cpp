#include <iostream>

// we can create template classes and struct
template<typename T>
class List
{
private:
	T *			_content;
	List<T> *	_next;

public:
	List<T>(T const & content);
	~List();
};
