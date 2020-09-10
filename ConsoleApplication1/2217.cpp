//solving..
#include "pch.h"
#include <iostream>
using namespace std;

void quickSort(int i, int j, int arr[]) {
	if (i >= j) return;
	int pivot = arr[(i + j) / 2];
	int left = i;
	int right = j;

	while (left <= right) {
		while (arr[left] < pivot) left++;
		while (arr[right] > pivot) right--;
		if (left <= right) {
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
	quickSort(i, right, arr);
	quickSort(left, j, arr);
}

int main()
{
	int n, sum = 0, min, answer=0;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	quickSort(0, n - 1, arr);

	for (int i = 0; i < n; i++) {
		min = arr[i];
		if (min*(n - i) > arr[i + 1] * (n - 1 - i)) {
			answer = min * (n - i);
			break;
		}
	}

	cout << answer<<endl;
}

