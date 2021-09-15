#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int task5() {
	int num;
	cout << "Enter number, and I will translate it to letter\n";
	cin >> num;

	cout << "It will be: '" << char(num) << "'\n\n";

	char ch;
	cout << "Enter char, and I will translate it to number\n";
	cin >> ch;

	cout << "It will be: '" << int(ch) << "'\n\n";

	return 0;
}

int main() {
	task5();
}