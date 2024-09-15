

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Course Name: " << "Student #: " << endl << endl;

	for (int i = 0; i < 100; i++) { //prints c++ students 
		cout << setw(13) <<left << "C++ " << i << endl;
	} 
	for (int i = 0; i < 50; i++) { //prints js students
		cout << setw(13) << left << "Javascript" << i << endl;
	}

}

