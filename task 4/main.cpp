#include <iostream>
using namespace std;

int main()
{
	int a, b, res;
	char op;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	cout << "Enter operation: " << endl;
	cin >> op;
	int* ptr_a = &a;
	int* ptr_b = &b;
	switch (op) {
	case '+':
		res = *ptr_a + *ptr_b;
		cout << *ptr_a << " + " << *ptr_b << " = " << res;
		break;
	case '-':
		res = *ptr_a - *ptr_b;
		cout << *ptr_a << " - " << *ptr_b << " = " << res;
		break;
	case '*':
		res = *ptr_a * *ptr_b;
		cout << *ptr_a << " * " << *ptr_b << " = " << res;
		break;
	case '/':
		if (*ptr_b == 0) {
			cout << "Division by zero is not possible";
			break;
		}
		else {
		res = *ptr_a / *ptr_b;
		cout << *ptr_a << " / " << *ptr_b << " = " << res;
		break;
		}
	}
	return 0;
}