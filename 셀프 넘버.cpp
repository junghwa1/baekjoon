#include <iostream>
#include <string>
using namespace std;

int d_n(int n) {
	int a, b,c,d,e;
	a = n / 10000;
	b = (n % 10000)/1000;
	c = (n % 1000) / 100;
	d = (n % 100) / 10;
	e = n % 10;
	return a + b + c + d + e + n;
}

int main() {
	int n=1,i=1;
	int arr[10001] = { 0 };
	while (i<=10000) {
		n = d_n(i);
		if (n <= 10000)
			arr[n] = 1;
		i++;
	}
	for (int j = 1; j <= 10000; j++) {
		if (arr[j] == 0) {
			cout << j << endl;
		}
	}

	return 0;
}