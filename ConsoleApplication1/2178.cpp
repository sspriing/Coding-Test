#include "pch.h"
#include <iostream>
#include<vector>
#include <queue>
#include <stdio.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int map[101][101];
	bool check[101][101];
		

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}

	int depth = 1;

	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	queue<pair<int, int>> q;

	q.push(make_pair(0, 0));

	check[0][0] = false;

	while (!q.empty()) {
		int size = q.size();

		for (int z = 0; z < size; z++) {

			int x = q.front().first, y = q.front().second;
			q.pop();

			//cout << "x: " << x << ", y: " << y << endl;

			if (x == n-1 && y == m-1) {
				cout << depth<<endl;
				return 0;
			}

			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
				if (check[nx][ny] || !map[nx][ny]) continue;

				q.push(make_pair(nx, ny));
				check[nx][ny] = true;
			}
		}
		//cout << depth << endl;
		depth++;
	}
}
