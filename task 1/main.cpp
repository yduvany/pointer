#include <iostream>
using namespace std;

int main() {
	int a, b, * ora_a, * ora_b;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	ora_a = &a;
	ora_b = &b;
	if (*ora_a > *ora_b) {
		cout << * ora_a << " is bigger number" << endl;
	}
	else {
		cout << * ora_b << " is bigger number" << endl;
	}
	return 0;
}