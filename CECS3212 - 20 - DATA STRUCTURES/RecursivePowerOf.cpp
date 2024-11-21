#include <iostream>
using namespace std;

int Recursive(int num, int exp) {
	
	if (exp == 0)
		return 1;
	return num * Recursive(num, exp - 1);
}

int main() {
	int num, exp;

	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter Exponent: ";
	cin >> exp;
	cout<<Recursive(num, exp);
}