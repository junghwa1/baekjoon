#include <iostream>
using namespace std;

typedef struct User {
	int year;
	char name[101];
}user;

void merge(user* A, int a, int n, int q) {
	user *temp = new user[n+1];
	int i = a;
	int t = a;
	int j = q + 1;
	while (i <= q && j <= n) {
		if (A[i].year <= A[j].year)
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

void mergesort(user* A, int a, int n) {
	int q = (a + n) / 2;
	if (a < n) {
		mergesort(A, a, q);
		mergesort(A, q+1, n);
		merge(A, a, n, q);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	user* arr = new user[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].year >> arr[i].name;
	}
	
	mergesort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i].year << " " << arr[i].name<<"\n";
	}

	delete[] arr;

	return 0;
}