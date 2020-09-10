#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string num = "0";
	int result = 0;
	bool isMinus = false;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {

		//마지막 문자일때
		if (i == str.length() - 1) {
			num += str[i];

			//참이면 뺀다
			if (isMinus) {
				result -= stoi(num);
			}
			//거짓이면 더한다
			else {
				result += stoi(num);
			}
		}

		//이외의 경우
		else {
			if (isdigit(str[i])) {
				num += str[i];
			}
			else {
				//거짓이면 더한다
				if (isMinus==false) {
					result += stoi(num);
					if (str[i] == '-')
						isMinus = true;
				}
				//참이면 뺀다
				else
					result -= stoi(num);
				num = "0";

			}
		}
	}
	cout << result<<endl;
}