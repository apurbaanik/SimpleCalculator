//============================================================================
// Name        : Calculator.cpp
// Author      : Anik Barua
// Version     : 1.0
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

double add(double num1, double num2) {
	return num1 + num2;
}

double sub(double num1, double num2) {
	return num1 - num2;
}

double mult(double num1, double num2) {
	return num1 * num2;
}

double div(double num1, double num2) {
	return num1 / num2;
}

int main() {

	double num1, num2;
	char oper;
	double result = 0;

	cout << "The operation you want to perform? " << endl;
	cout << "Press a for add, s for subtract, m for multiplt, d for Division, p for power, r for sqrt root: ";
	cin >> oper;

	if(oper == 'r'){
		cout << "Enter your number: ";
	    cin >> num1;
	    result = sqrt(num1);
	    cout << "\nResult: " << result << endl;
	    exit(0);
	}

	cout << "Enter your first number: ";
	cin >> num1;

	cout << "\nEnter your second number: ";
	cin >> num2;

	if (oper == 'a') {
		result = add(num1, num2);
	} else if (oper == 's') {
		result = sub(num1, num2);
	} else if (oper == 'm') {
		result = mult(num1, num2);
	} else if (oper == 'd') {
		result = div(num1, num2);
	} else if (oper == 'p') {
			result = pow(num1, num2);
	} else {
		cout << "\nInvalid operator";
	}

	cout << "\nResult: " << result << endl;

	return 0;
}
