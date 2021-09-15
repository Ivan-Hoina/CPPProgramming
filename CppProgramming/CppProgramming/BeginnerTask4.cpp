#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int task4() {
	float meters;
	cout << "Enter meters: \n";
	cin >> meters;

	float kilometers = meters / 1000;
	cout << "Kilometers: " << setprecision(5) << kilometers << '\n';

	return 0;
}