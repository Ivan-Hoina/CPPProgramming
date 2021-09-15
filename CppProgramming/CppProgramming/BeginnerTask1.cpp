#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

/*

	If you enter number like 2030
	programm will display:

	1 number equivalent >> 2
	2 number equivalent >> 0
	3 number equivalent >> 3
	4 number equivalent >> 0

*/

int task1() {
	int number;
	cout << "Enter number: " << '\n';
	cin >> number;

	string s_number = to_string(number);

	for (int i = 0; i < s_number.size(); i++) {
		cout << i + 1 << " number equivalent >> " << s_number[i] << '\n';
	}

	return 0;
}