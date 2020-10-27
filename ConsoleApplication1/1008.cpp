//complete
#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int a, b;
	double c;
	cin >> a >> b;

	//소수점 고정 및 10자리까지 출력
	cout << fixed;
	cout.precision(10);

	c = (double)a / (double)b;
	cout << c;
}