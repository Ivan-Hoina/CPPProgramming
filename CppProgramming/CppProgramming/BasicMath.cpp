#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

// Tasks

void showResult(double _result) {
	cout << setprecision(4) << "Result is: " << _result << '\n';
}

void task1() {
	int x, y;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	double r1 = sqrt((x + 2) / ((3 * y) + 1));

	double r2 = ((8 * pow(x, 2)) + 3) / (1 - (9 * pow(y, 2)));

	double result = sqrt(r1 + r2);

	showResult(result);
}

void task2() {
	int a, b, s;

	cout << "Enter A value: " << '\n';
	cin >> a;

	cout << "Enter B value: " << '\n';
	cin >> b;

	cout << "Enter S value: " << '\n';
	cin >> s;

	double r1 = (34 * sin(b + a)) / sqrt((2 * a + 4 * s) / (5 * s));

	double result = r1 + (4 * a * b);

	showResult(result);
}

void task3() {
	int x, y, a;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	cout << "Enter A value: " << '\n';
	cin >> a;

	double r1 = (pow(y, 2) - x) / (pow(x, 2) - y + 1);

	double r2 = (pow(a, 2) - x + 2) / (pow(x, 2) - exp(2) - 2);

	double result = r1 - r2;

	showResult(result);
}

void task4() {
	int x, y, f;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	cout << "Enter F value: " << '\n';
	cin >> f;

	double r1 = (y - 1) * (y - 3) - log(y * (log(x + 1))) - y * (y - 3);

	double r2 = f * (f - 3);

	double result = r1 / r2;

	showResult(result);
}

void task5() {
	int x, y;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	double r1 = sqrt((x + 2) / (3 * y + 1));

	double r2 = (8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2));

	double r3 = (x + 0.5) / (9 * y + 3);

	double result = r1 + r2 * r3;

	showResult(result);
}

void task6() {
	int x;

	cout << "Enter X value: " << '\n';
	cin >> x;

	double r1 = log(pow((pow(x, 2) + x), 2));

	double r2 = sqrt(8 * (pow(x, 2) + x));

	double result = r1 - r2 + 12;

	showResult(result);
}

void task7() {
	int h, k;

	cout << "Enter H value: " << '\n';
	cin >> h;

	cout << "Enter K value: " << '\n';
	cin >> k;

	double r1 = sqrt(sin(2 * h));

	double r2 = 2 * sin(k);

	double r3 = cos(pow(k, 2));

	double result = r1 * r2 * r3;

	showResult(result);
}

void task8() {
	int x, y, h;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	cout << "Enter H value: " << '\n';
	cin >> h;

	double r1 = sin(y / 2);

	double r2 = sqrt((1 - cos(x)) / 2);

	double result = r1 * r2 * pow(h, 2);

	showResult(result);
}

void task9() {
	int y, x, k;

	cout << "Enter Y value: " << '\n';
	cin >> y;

	cout << "Enter X value: " << '\n';
	cin >> x;

	cout << "Enter K value: " << '\n';
	cin >> k;

	double r1 = (sin(8 * y) - sin(2 * x));

	double r2 = (cos(2 * pow(y, 2)) - cos(8 * x));

	double r3 = (1 - cos(6 * k));

	double result = (r1 * r2) / r3;

	showResult(result);
}

void task10() {
	int h, k, t;

	cout << "Enter H value: " << '\n';
	cin >> h;

	cout << "Enter K value: " << '\n';
	cin >> k;

	cout << "Enter T value: " << '\n';
	cin >> t;

	double r1 = (2 * cos((h / 3) - k));

	double r2 = sqrt(k) * sin(t);

	double result = r1 - r2 + cos(h);

	showResult(result);
}

void task11() {
	int x;

	cout << "Enter X value:" << '\n';
	cin >> x;

	double r1 = pow((log(pow(x, 2) + x)), 2);

	double r2 = sqrt(8 * (pow(x, 2) + x));

	double result = r1 - r2 * sin(exp(x));

	showResult(result);
}

void task12() {
	int x, y;

	cout << "Enter X value:" << '\n';
	cin >> x;

	cout << "Enter Y value:" << '\n';
	cin >> y;

	double r1 = sqrt((x + 2) / (3 * y + 1));

	double r2 = (8 * pow(x, 2) + 3) / (1 + 9 * pow(y, 2));

	double result = r1 + r2 * exp(log(x + y));

	showResult(result);
}

void logic() {
	int task = 12;
	cout << "Number of tasks: " << task << '\n';

	cout << "Choose task: " << '\n';
	cin >> task;

	switch (task) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;
	case 7:
		task7();
		break;
	case 8:
		task8();
		break;
	case 9:
		task9();
		break;
	case 10:
		task10();
		break;
	case 11:
		task11();
		break;
	case 12:
		task12();
	}
}

int main() {
	bool isOn = true;
	char exitToken;

	while (isOn) {
		logic();

		cout << "You want to see more?  Y / N" << '\n';
		cin >> exitToken;

		if (exitToken == 'N') {
			return 0;
		}
	}
}