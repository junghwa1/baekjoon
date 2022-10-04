#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int bs(int* A, int left, int right, int k) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (k > A[mid])
			left = mid + 1;
		else if (k < A[mid]) {
			right = mid - 1;
		}
		else
			return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k, key;
	cin >> n;
	int arr[100001];
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[i] = k;
	}

	sort(arr ,arr+n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> key;
		cout << bs(arr, 0, n - 1, key)<< "\n";
	}
	
	return 0;
}