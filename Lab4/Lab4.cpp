#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}


void factorial() {
	int n;
	int fact = 1;

	cout << "Factorial: " << endl;
	cout << "Please enter a number: ";
	cin >> n;

	while (n < 0) {
		cout << "Please enter a POSITIVE number: ";
		cin >> n;
	}
	
	cout << n << "! = ";

	cout << 1;

	for (int i = 2; i < n+1; i++) {
		cout << " * " << i;
		fact = fact * i;
	}
	cout << " = " << fact << endl;
}

void arithmetic() {
	int start;
	int add;
	int series;
	int arith;
	int total = 0;

	cout << "arithmetic: " << endl;
	cout << "Please enter a number to start with: ";
	cin >> start;

	cout << "Please enter a number to add: ";
	cin >> add;

	cout << "Please enter the number of elements in the series: ";
	cin >> series;

	while (series < 0) {
		cout << "Please enter a positive number of elements: ";
		cin >> series;
	}
	
	cout << start;
	arith = start;

	for (int i = 0; i < series-1; i++) {
		arith = arith + add;
		cout << " + " << arith;
		total = total + arith;
	}

	cout << " = " << total + start << endl;

}
void geometric() {
	int start;
	int mult;
	int series;
	int geo;
	int total = 0;

	cout << "Geometric: " << endl;
	cout << "Please enter a number to start with: ";
	cin >> start;

	cout << "Please enter a number to multiply: ";
	cin >> mult;

	cout << "Please enter the number of elements in the series: ";
	cin >> series;

	while (series < 0) {
		cout << "Please enter a positive number of elements: ";
		cin >> series;
	}

	cout << start;
	geo = start;

	for (int i = 0; i < series-1; i++) {
		geo = geo * mult;
		cout << " * " << geo;
		total = total + geo;
	}

	cout << " = " << total + start << endl;

}

int main() {
	int choice;
	char again;
	float n;
	float fact;

	do {
		printMenu();
		cin >> choice;
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
