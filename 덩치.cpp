#include <iostream>
using namespace std;

int main() {
	int n, max=0, count=0;
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	int* c = new int[n];
	int* rank = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cin >> y[i];
		rank[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				count++;
			}
		}
		c[i] = count;
	}
	for (int i = 0; i < n; i++) {
		rank[i] = c[i] + 1;
	}
	
	for (int i = 0; i < n; i++)
		cout << rank[i] << " ";

	delete[] x;
	delete[] y;
	delete[] c;
	delete[] rank;

	return 0;
}