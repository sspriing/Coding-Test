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

		//������ �����϶�
		if (i == str.length() - 1) {
			num += str[i];

			//���̸� ����
			if (isMinus) {
				result -= stoi(num);
			}
			//�����̸� ���Ѵ�
			else {
				result += stoi(num);
			}
		}

		//�̿��� ���
		else {
			if (isdigit(str[i])) {
				num += str[i];
			}
			else {
				//�����̸� ���Ѵ�
				if (isMinus==false) {
					result += stoi(num);
					if (str[i] == '-')
						isMinus = true;
				}
				//���̸� ����
				else
					result -= stoi(num);
				num = "0";

			}
		}
	}
	cout << result<<endl;
}