#include <iostream>
#include <string>
using namespace std;

void merge(string* A, int a, int n,int q) {
	string* temp = new string[n+1];
	int i = a;
	int t = a;
	int j = q + 1;
	while (i <= q && j <= n) {
		if (A[i].length() > A[j].length()){
			temp[t++] = A[j++];
		}
		else if (A[i].length() < A[j].length()) {
			temp[t++] = A[i++];
		}
		else {
			if (A[i].compare(A[j]) < 0)
				temp[t++] = A[i++];
			else
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

void mergesort(string* A, int a, int n) {
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
	string* arr = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	

	mergesort(arr, 0, n - 1);

	cout << arr[0]<<"\n";
	for(int i = 1; i < n; i++) {
		if(arr[i]!=arr[i-1])
			cout << arr[i]<<"\n";
	}



	delete[] arr;

	return 0;
}