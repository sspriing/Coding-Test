//complete
#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int a, b;
	double c;
	cin >> a >> b;

	//�Ҽ��� ���� �� 10�ڸ����� ���
	cout << fixed;
	cout.precision(10);

	c = (double)a / (double)b;
	cout << c;
}