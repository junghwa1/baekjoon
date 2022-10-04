#include <iostream>
using namespace std;

int main() {
	int a, b,min,max,i=1;
	cin >> a >> b;

	while (1) {
		if ((a % i) == 0 && (b % i) == 0)
			max = i;
		if (a == i || b == i)
			break;
		i++;
	}

	min = a * b / max;

	cout << max << endl << min;
	return 0;
}