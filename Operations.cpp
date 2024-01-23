// 1 user input 2 values and add
// 2 user can choose from add and subtraction
// 3 MDAS, modulus and power (you can use math.h)
// 4 user can use it repeatedly until declared exit, exit must exist both in initial end
// 5 following the UX Name, welcome, options, input, result

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int num1, num2, operation, addition{}, subtract{}, result = 0, isToContinue;
	string name; 
	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Hello, " << name << "!" << endl;
	do
	{

		cout << "Menu of Choice.\n"
			<< "1. Add\n"
			<< "2. Subtract\n"
			<< "3. Multiply\n"
			<< "4. Divide\n"
			<< "5. Modulo\n"
			<< "6. Pow\n"
			<< "0. Exit\n"
			<< "\nEnter a choice: ";
		cin >> operation;
		if (operation == 0) {
			exit(0);
			
		} 
		else {
		cout << "Enter a first number: ";
		cin >> num1;
		cout << "Enter a second number: ";
		cin >> num2;

		switch (operation) {
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
		case 5:
			result = num1 % num2;
			break;
		case 6:
			result = pow(num1, num2);
			break;
		default:
			cout << "Invalid operation.";
		}
			cout << "Exit.";

		}
		cout << "The result is " << result << endl;

		cout << "Do you want to do another operation?\n"
			<< "Press any number to continue\n"
			<< "Press 0 to exit.";
		cin >> isToContinue;
	} while (isToContinue != 0);
	return 0;
}
