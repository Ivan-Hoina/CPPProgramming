#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int task2() {
	int a, b, c;

	cout << "Enter value a, b, c: " << '\n';
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;
	cout << "\nc = ";
	cin >> c;

	double x;
	cout << "\nCaclutation: x = (à + b - c / à) + c * a * a - (a + b)\n";
	x = (a + b - c / a) + c * a * a - (a + b);
	cout << "x = " << x << '\n';

	return 0;
}