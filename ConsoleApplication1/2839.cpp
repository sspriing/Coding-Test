//complete
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	bool able = true;
	cin >> i;
	int t = 0, f = 0;

	while (true) {
		if (i%5 == 0) {
			f = i / 5;
			break;
		}
		else if(i<0){
			able = false;
			break;
		}
		else {
			t++;
			i -= 3;
		}
			
	}

	if (able) {
		cout << t + f;
	}
	else {
		cout << -1;
	}

}
