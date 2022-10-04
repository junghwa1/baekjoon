#include <iostream>
using namespace std;

int sum(int n,int k) {
	if (k == 0)
		return n;
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += sum(i, k - 1);
	}
	return s;
}


int main() {
	int t, k, n;
	cin >> t;
	int *M = new int[t];

	for (int i = 0; i < t; i++) {
		cin >> k;
		cin >> n;
		M[i]=sum(n, k);
	}
	for (int i = 0; i < t; i++) {
		cout << M[i] << endl;
	}

	return 0;
}