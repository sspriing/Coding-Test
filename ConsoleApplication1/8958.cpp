//complete
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string q;
		cin >> q;
		int point = 0, tp = 0;
		for (int j = 0; j < q.length(); j++) {
			if (q.at(j) == 'O') {
				point++;
				tp += point;
			}
			else
				point = 0;
		}
		cout << tp << endl;
	}

}