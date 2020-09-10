#include "pch.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
	int t, n;
	cin >> t;
	int *result = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<vector<int> > arr;
		for (int j = 0; j < n; j++) {
			int first, second;
			cin >> first;
			cin >> second;

			vector<int> input;
			input.push_back(first);
			input.push_back(second);
			
			arr.push_back(input);
		}

		for(int j = 0;j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				if (arr[0][j] > arr[0][k] && arr[1][j] > arr[1][k]) {
						arr.erase(arr.begin() + k);
				}
				else if (arr[0][j] < arr[0][k] && arr[1][j] < arr[1][k]) {
					arr.erase(arr.begin() + j);
					break;
				}
			}
		}

		for (int j = 0; j <n; j++) {
			cout << arr[0][j] << ", " << arr[1][j] << endl;
		}

	}
}