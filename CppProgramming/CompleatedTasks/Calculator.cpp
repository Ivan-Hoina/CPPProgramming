#include <iostream>
#include <string>

using namespace std;

void print(string line) {
	cout << line << '\n';
}

char readMath() {
	char in = 'e';
	cin >> in;
	return in;
}

float readValue() {
	float value = 0;
	cin >> value;
	return value;
}

float calculateResult(float _first, float _second, char _doing) {
	float result = 0;
	switch (_doing)
	{
	case '+':
		result = _first + _second;
		break;
	case '-':
		result = _first - _second;
		break;
	case '*':
		result = _first * _second;
		break;
	case '/':
		result = _first / _second;
		break;
	}
	return result;	
}

void calculator() {
	float first = 0;
	cout << "Enter first num: " << '\n';
	first = readValue();

	float second = 0;
	cout << "Enter second num: " << '\n';
	second = readValue();

	char doing = 'e';
	cout << "It will be + -, or * /" << '\n';
	doing = readMath();

	float result = calculateResult(first, second, doing);
	cout << "You asked, how will be: " << first << ' ' << doing << ' ' << second << " " << "?\n";
	cout << "You have result: " << result << '\n';
}

bool wantExit() {
	cout << "Exit? " << "Type: Y / N" << '\n';
	char a = ' ';
	cin >> a;
	switch (a)
	{
	case 'Y':
		return false;
		break;
	case 'y':
		return false;
		break;
	case 'N':
		return true;
		break;
	case 'n':
		return true;
		break;
	}

	return false;
}

int main() {
	bool isOn = true;
	while (isOn) {
		calculator();
		isOn = wantExit();
	}

	return 0;
}