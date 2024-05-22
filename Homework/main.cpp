#include <iostream>
using namespace std;

class fraction {
private:
	int numerator;
	int denominator;
	void operation_for_addition_subtraction(int& num, int denom) {
		numerator = numerator * denom;
		num = num * denominator;
		denominator = denominator * denom;
	}
public:
	void addition() {
		int num, denom;
		cout << "Enter numerator: ";
		cin >> num;
		cout << "Enter denominator: ";
		cin >> denom;
		operation_for_addition_subtraction(num, denom);
		numerator = numerator + num;
	}
	void subtraction() {
		int num, denom;
		cout << "Enter numerator: ";
		cin >> num;
		cout << "Enter denominator: ";
		cin >> denom;
		operation_for_addition_subtraction(num, denom);
		numerator = numerator - num;
	}
	void separation() {
		int num, denom;
		cout << "Enter numerator: ";
		cin >> num;
		cout << "Enter denominator: ";
		cin >> denom;
		numerator = numerator * denom;
		denominator = denominator * num;
	}
	void multiplication() {
		int num, denom;
		cout << "Enter numerator: ";
		cin >> num;
		cout << "Enter denominator: ";
		cin >> denom;
		numerator = numerator * num;
		denominator = denominator * denom;
	}
	void print() {
		cout << numerator << "/" << denominator;
		cout << endl;
	}
	void init() {
		cout << "Enter numerator: ";
		cin >> numerator;
		cout << "Enter denominator: ";
		cin >> denominator;
	}
};

int main() {
	fraction a;
	a.init();
	a.print();
	a.multiplication();
	a.print();
}