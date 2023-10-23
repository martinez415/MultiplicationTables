#include <iostream>
using namespace std;

int main()
{
	cout << "Multiplication Tables 1 - 12\n=========================" << endl;

	int r = 12;
	int c = 12;

	while (r >= 1) {
		cout << "Table of " << r << "\n===========" << endl;
		while (c >= 1) {
			cout << r << " x " << c << " = " << (r * c) << endl;
			c--;
		}
		cout << endl;
		c = 12;
		r--;
	}

	cout << "Multiplication Tables 1 - 5\n===========================" << endl;

	for (int r = 5; r >= 1; r--) {
		cout << "Table of " << r << "\n========" << endl;
		for (int c = 12; c >= 1; c--) {
			cout << r << " x " << c << " = " <<(r * c) << endl;
		}
		cout << endl;
	}

}