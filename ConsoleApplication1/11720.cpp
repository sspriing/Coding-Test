//complete
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, answer = 0;
	string num;
	cin >> n;
	cin >> num;

	for (int i = 0; i < n; i++) {
		answer += (int)(num.at(i))-48;
	}

	cout << answer;
}