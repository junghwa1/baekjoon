#include <iostream>
using namespace std;

int main() {
	unsigned long long int a;
	int c;
	cin >> c;
	int* N = new int[c];
	int* M = new int[c];
	for (int i = 0; i < c; i++) {
		cin >> N[i] >> M[i];
	}

	for (int i = 0; i < c; i++) {
		a = 1;
		for (int j = 0; j < N[i]; j++) {
			a *= M[i] - j;
			a /= 1 + j;
		}

		cout << a<<"\n";
	}

}