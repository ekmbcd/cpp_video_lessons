#include <iostream>
#include <string>

using std::cout;
using std::string;

class Student
{
	private:
		string _login;
		
	public:
		Student() : _login("default")		// the constructor does not take parameters
		{
			cout << "Student " << _login << " is born" << std::endl;
		}
		~Student()
		{
			cout << "Student " << _login << " died" << std::endl;
		}
};

int main()
{
	Student *students = new Student[42];	// allocates space for 42 students (no need to sizeof)
											// then call a constructor for each one of them

	delete [] students;						// delete [] destroys an allocated array 

	return(0);			
}