#include <iostream>
using namespace std;

void merge(int* A, int a, int n, int q) {
	int* temp = new int[n + 1];
	int i = a;
	int t = a;
	int j = q + 1;
	while (i <= q && j <= n) {
		if (A[i] <= A[j])
			temp[t++] = A[i++];
		else
			temp[t++] = A[j++];
	}

	int tmp = i > q ? j : i;
	while (t <= n)
		temp[t++] = A[tmp++];
	for (int k = a; k <= n; k++)
		A[k] = temp[k];

	delete[] temp;
}

void mergesort(int* A, int a, int n) {
	int q = (a + n) / 2;
	if (a < n) {
		mergesort(A, a, q);
		mergesort(A, q+1, n);
		merge(A, a, n, q);
	}
}

int main() {
	int n, ans=0, tmp=0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergesort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		tmp+=arr[i];
		arr[i] = tmp;
		ans += arr[i];
	}

	cout << ans;

	delete[] arr;

	return 0;
}