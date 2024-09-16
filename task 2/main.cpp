#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (*(&num) < 0) {
		cout << "-" << endl;
	}
	else if (*(&num) > 0) {
		cout << "+" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}