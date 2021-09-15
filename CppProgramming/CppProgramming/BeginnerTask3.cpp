#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <math.h>

/*

	This programm can uppercase your letter

*/

using namespace std;

int task3() {
	char letter;
	cout << "Enter lover case letter:\n";
	cin >> letter;

	cout << "Unpper cased letter: " << (char)toupper(letter) << '\n';

	return 0;
}