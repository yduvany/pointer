#include <iostream>
using namespace std;

int main()
{
	int abc = 5;
	int dfg = 10;
	cout << "abc = " << abc << endl;
	cout << "dfg = " << dfg << endl;
	int* ptr_abc = &abc;
	int* ptr_dfg = &dfg;
	cout << "\nptr_abc = " << *ptr_abc << endl;
	cout << "ptr_dfg = " << *ptr_dfg << endl;
	cout << "\nswapping values: " << endl;
	int temp = *ptr_abc;
	*ptr_abc = dfg;
	*ptr_dfg = temp;
	cout << "ptr_abc = " << *ptr_abc << endl;
	cout << "ptr_dfg = " << *ptr_dfg << endl;
}