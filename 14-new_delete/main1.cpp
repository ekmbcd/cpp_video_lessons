#include <iostream>
#include <string>

using std::cout;
using std::string;

class Student
{
	private:
		string _login;
		
	public:
		Student(string login) : _login(login)
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
	Student bob = Student("bob");			// allocated on the stack
	
	Student *jim;
	jim = new Student("jim");				// allocated on the heap (uses malloc)

	delete jim;			// jim is destroyed (uses free)

	// don't try to free() something allocated with "new"

	return(0);			// bob is destroyed
}