#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	int num[size] = { 1, 2, 3, 4, 5 };
	int sum = 0;
	int* ptr = num;
	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}
	cout << "Summary: " << sum << endl;
	return 0;
}