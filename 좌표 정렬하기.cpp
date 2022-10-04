#include <iostream>
using namespace std;

typedef struct XY{
	int x;
	int y;
}xy;

void merge(xy A[], int a, int n, int q) {
	xy* temp = new xy[n + 1];
	int t = a;
	int i = a;
	int j = q + 1;
	while (i <= q && j <= n) {
		if (A[i].x == A[j].x) {
			if (A[i].y < A[j].y)
				temp[t++] = A[i++];
			else
				temp[t++] = A[j++];
		}
		else if (A[i].x < A[j].x) {
			temp[t++] = A[i++];
		}
		else if (A[i].x > A[j].x) {
			temp[t++] = A[j++];
		}
	}

	int tmp = i > q ? j : i;
	while (t <= n)
		temp[t++] = A[tmp++];

	for (int k = a; k <= n; k++)
		A[k] = temp[k];

	delete[] temp;
}

void mergesort(xy A[], int a, int n) {
	int q = (n + a) / 2;
	if (a<n) {
		mergesort(A, a, q);
		mergesort(A, q+1, n);
		merge(A, a, n, q);
	}
}

int main() {
	int n;
	cin >> n;
	xy* arr = new xy[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}

	mergesort(arr, 0, n-1);

	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}

	delete[] arr;
	return 0;
}