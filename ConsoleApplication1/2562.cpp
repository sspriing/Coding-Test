//complete
#include <iostream>
using namespace std;

int main() {
	int max = 0, tmp, n;

	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		if (max < tmp) {
			max = tmp;
			n = i+1;
		}
			
	}

	cout<<max<<endl;
	cout << n;
}