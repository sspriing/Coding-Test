//complete
#include <iostream>
#include <string>
using namespace std;

int main() {

	int first;
	cin >> first;

	string answer;

	if (first == 1) {
		answer = "ascending";
		int prev = 1;
		for (int i = 0; i < 7; i++) {
			int tmp;
			cin >> tmp;
			if (tmp < prev) {
				answer = "mixed";
				break;
			}
			prev = tmp;
		}
	}

	else if (first == 8) {
		answer = "descending";
		int prev = 8;
		for (int i = 0; i < 7; i++) {
			int tmp;
			cin >> tmp;
			if (tmp > prev) {
				answer = "mixed";
				break;
			}
			prev = tmp;
		}
	}

	else 
		answer = "mixed";

	cout << answer;
}