#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void dfs(int start, vector<int> map[], bool check[]) {
	check[start] = true;
	cout << start<<" ";
	for (int i = 0; i < map[start].size(); i++) {
		int next = map[start][i];
		if (check[next] == false) {
			dfs(next, map, check);
		}
	}
}

void bfs(int start, vector<int>map[], bool check[]) {
	queue <int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		cout << tmp<<" ";

		for (int i = 0; i < map[tmp].size(); i++) {
			if (check[map[tmp][i]] == false) {
				q.push(map[tmp][i]);
				check[map[tmp][i]] = true;
			}
		}
	}
}

int main() {
	int node, connect, start;
	cin >> node >> connect >> start;

	vector <int> *map = new vector<int>[node + 1];
	bool* check = new bool[node + 1];
	fill(check, check + node + 1, false);

	for (int i = 0; i < connect; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		map[n1].push_back(n2);
		map[n2].push_back(n1);
	}

	for (int i = 0; i < node; i++) {
		sort(map[i].begin(), map[i].end());
	}

	dfs(start, map, check);
	cout << endl;
	fill(check, check + node + 1, false);
	bfs(start, map, check);

	return 0;
}