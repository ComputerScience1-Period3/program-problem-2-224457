/*
Noah Bekele-September 27 2017
Assignment Name : *
Breif Description of the Assignment
*/
// Libraries
#include <iostream>// gives access to cin, cout, cndl, <<, >>,
#include <conio.h> // gives access to _kbhit() and getch(), <<,>>,
// Namespaces 
using namespace std; //*
// Functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';

}
//MAIN
void main() {
	// Variables
	int age; // How old are you? 
	char first_digit; // What is the first digit in your cellphone number? 
	bool fast_or_no; // Are you fast or not? 
					  // void doesnt hold value  
	double Height; // How Tall are you? 

	int calc_1, calc_2, calc_3, calc_4, calc_5;

	//user Queries 
	cout << "How old are you? (In Years)";
	cin >> age;
	cout << "What is the first digit in your cellphone number : (Single Digit)";
	cin >> first_digit;
		cout << "Are you fast (1) or not (0) : (1/0)";
	cin >> fast_or_no;
	cout << "How tall are you? (to the nearest hundredth place):";
	cin >> Height;

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number : ";
	cin >> calc_2;
	cout << "Enter a number : ";
	cin >> calc_3;

	// After questions print out stored data 
	cout << "Your age is " << age << endl; // ENDL
	cout << "Your first digit is " << first_digit << '\n'; // different ways of going to the new line
	cout << boolalpha << "It is " << fast_or_no << " that you are Fast. \n";
	cout << "Your Height is : " << Height << "\n";

	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl; // output doing math
	calc_4 = calc_2 * calc_3;
	cout << calc_2 << " * " << calc_3 << " = " << calc_4 << '\n';
	if (calc_4 < calc_2) {
		cout << "Calc_3 is less than one. " << endl;
	}
	// Pause
	pause();
}