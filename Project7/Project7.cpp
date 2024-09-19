// Lab_03_1.cpp
// < Konchak Olia >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14.

#include <iostream>
#include <cmath>

using namespace std;

	double x; //вхідний параметр
	double y; //результат обчислення 
	double A; // проміжний результат - функціонально стала частина виразу 
	double B; //проміжний результат - функціонально стала частина виразу

	// функція для обчислення арктангенса 
	double arctg(double x) {
		return atan(x);
	}
	double calculate(double x) {
		// обчислення А і В
		double A = pow(x, 7); // бо х в 7 степені
		double B = 0; // змінна для обчислення результату

		double y = fabs(4 * x - 1); // модуль 

		// якщо різні значення х
		if (x < 0); {
			B = pow(x, 7) - 2 * x;
		}
	     if (x >=0 && x < 3) {
			B = arctg(exp(x) + 1) / 8;
		}
		else if (x >= 3) {
			B = pow(x, 4) + exp(pow(x, 2) + 3);
		}
		return fabs(4 * x - 1) + A + B;
	}
	  int main() {
		double x;
		cout << "x = ";
		cin >> x;

		double result = calculate(x);
		cout << " y = " <<
			result << endl;
		return 0;
	}