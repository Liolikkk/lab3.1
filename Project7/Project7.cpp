// Lab_03_1.cpp
// < Konchak Olia >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 14.

#include <iostream>
#include <cmath>

using namespace std;

	double x; //������� ��������
	double y; //��������� ���������� 
	double A; // �������� ��������� - ������������� ����� ������� ������ 
	double B; //�������� ��������� - ������������� ����� ������� ������

	// ������� ��� ���������� ����������� 
	double arctg(double x) {
		return atan(x);
	}
	double calculate(double x) {
		// ���������� � � �
		double A = pow(x, 7); // �� � � 7 ������
		double B = 0; // ����� ��� ���������� ����������

		double y = fabs(4 * x - 1); // ������ 

		// ���� ��� �������� �
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