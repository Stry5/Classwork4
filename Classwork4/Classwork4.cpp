// Classwork4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Course Name: " << "Student #: " << endl << endl;
	for (int i = 0; i < 100; i++) {
		cout << setw(13) <<left << "C++ " << i << endl;
	}
	for (int i = 0; i < 50; i++) {
		cout << setw(13) << left << "Javascript" << i << endl;
	}

}

