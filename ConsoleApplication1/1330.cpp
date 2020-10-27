//complete
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	string ans;
	cin >> a >> b;
	
	//삼항연산자
	a > b ? ans = ">" : a < b ? ans = "<" : ans = "==";

	//if문
	//if (a > b)
	//	ans = ">";
	//else if (a < b)
	//	ans = "<";
	//else
	//	ans = "==";

	cout << ans;
}