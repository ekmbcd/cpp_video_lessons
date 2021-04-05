#include <iostream>
#include <fstream>

using std::cout;
using std::string;
using std::endl;

int main()
{
	std::ifstream	ifs("numbers");		// input file stream (name_of_file)
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2;			// reads the first 2 integers from the file
	ifs.close();				// remember to close file streams
	
	cout << dst << " " << dst2 << endl;
	
	// there are other ways to read filestreams
	
	std::ofstream	ofs("test_out");	// output file stream (name_of_file)

	ofs << "i like ponies" << endl;		// overwrites the file
	ofs.close();						// remember to close file streams

	// stringstream is a stream for strings

}