// Lab_03_1.cpp
// < Жмуркевич Катерина >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 8
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;
	A = 2 + 6 * x;
	if (x <= 0)
		B = log(cos(x)) + pow(x, 5);
	if (0 < x && x <= 3)
		B = tan(3/(1.0 + log(x)));
	if (x > 3)
		B = 12 * x - pow(x, 8);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;//перший спосіб

	if (x <= 0)
		B = log(cos(x)) + pow(x, 5);
	else 
		if (0 < x && x <= 3)
			B = tan(3 / (1.0 + log(x)));
		else 
			B = 12 * x - pow(x, 8);
	y = A + B;
	cout << "2) y = " << y << endl;//другий спосіб
	cin.get();
	return 0;
}
