#include "pch.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int virus(int start, vector<int> map[], bool check[]);

int main() {
	int node, connect;
	cin >> node >> connect;

	vector <int>* map= new vector<int>[node + 1];
	bool*check = new bool [node + 1];
	fill(check, check + node + 1, false);

	for (int i = 0; i < connect; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		map[n1].push_back(n2);
		map[n2].push_back(n1);
	}

	cout<< virus(1, map, check);

	return 0;
}

int virus(int start, vector<int> map[], bool check[]) {
	int result = -1;

	queue<int> q;
	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		result++;
		for (int i = 0; i < map[tmp].size(); i++) {
			if (check[map[tmp][i]] == false) {
				q.push(map[tmp][i]);
				check[map[tmp][i]] = true;
			}
		}
	}

	return result;
}