// This is my firs C++ program

#include <iostream>
#include <string>
using namespace std;


int main() {
	/*
	string x;
	cout << "please enter an INT: \n";
	cin >> x;
	cout << "thank you" << endl;
	cin >> x;
	*/ 


	string y;

	cout << "Sandwich type:";
	getline(cin, y);
	cout << "creating " << y;
	cout << " Sandwich" << endl;

	cout << "Press enter to exit... ";
	getline(cin, y);


	return 0;
	
}