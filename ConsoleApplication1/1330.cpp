//complete
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	string ans;
	cin >> a >> b;
	
	//���׿�����
	a > b ? ans = ">" : a < b ? ans = "<" : ans = "==";

	//if��
	//if (a > b)
	//	ans = ">";
	//else if (a < b)
	//	ans = "<";
	//else
	//	ans = "==";

	cout << ans;
}