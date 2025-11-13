#include <iostream>
#include <iomanip>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
float fahrenheitToCelsius(float f);
float celsiusToFahrenheit(float c);
float dollarToPeso(float dollars);
float pesoToDollar(float pesos);

int main() {
    int choice;
	
	cout << "Choose Function\n";
    cout << "1. Add, subtract, divide, multiply\n";
    cout << "2. Fahrenheit <-> Celsius \n";
    cout << "3. Dollars <-> Pesos\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int num1, num2;
        cout << "\nEnter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> num2;

        cout << "\nSum: " << add(num1, num2);
        cout << "\nDifference: " << subtract(num1, num2);
        cout << "\nProduct: " << multiply(num1, num2);

        if (num2 != 0)
            cout << "\nQuotient: " << divide(num1, num2) << endl;
        else
            cout << "\nQuotient: Cannot divide by zero.\n";
    }
    else if (choice == 2) {
        int tempChoice;
        float temp;
        cout << "\n1. Fahrenheit to Celsius\n";
        cout << "2. Celsius to Fahrenheit\n";
        cout << "Enter choice: ";
        cin >> tempChoice;

        if (tempChoice == 1) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            cout << "In Celsius: " << fahrenheitToCelsius(temp) << "C\n";
        } else {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            cout << "In Fahrenheit: " << celsiusToFahrenheit(temp) << "F\n";
        }
    }
    else if (choice == 3) {
        int moneyChoice;
        float amount;
        cout << "\n1. Dollars -> Pesos\n";
        cout << "2. Pesos -> Dollars\n";
        cout << "Enter choice: ";
        cin >> moneyChoice;

        if (moneyChoice == 1) {
            cout << "Enter Dollars: ";
            cin >> amount;
            cout << "In Pesos: P" << dollarToPeso(amount) << endl;
        } else {
            cout << "Enter Pesos: ";
            cin >> amount;
            cout << "In Dollars: $" << pesoToDollar(amount) << endl;
        }
    }
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}

int add(int a, int b) {
	return a + b; 
	 }
int subtract(int a, int b) {
	return a - b; 
	 }
int multiply(int a, int b) {
	return a * b; 
	 }
float divide(int a, int b) {
	return (float)a / b; 
	}
float fahrenheitToCelsius(float f) { 
	return (f - 32) * 5 / 9; 
	}
float celsiusToFahrenheit(float c) { 
	return (c * 9 / 5) + 32; 
	}
float dollarToPeso(float dollars) { 
	return dollars * 58.19; 
	}
float pesoToDollar(float pesos) { 
	return pesos / 58.19; 
	}


