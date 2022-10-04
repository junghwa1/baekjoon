#include <iostream>	
using namespace std;

int main() {
	int m, n, sum = 0, count = 0,min;
	cin >> m;
	cin >> n;
	min = n+1;
	for (int i = m; i <= n; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				count++;
		}
		if (count == 2) {
			sum += i;
			if (min > i)
				min = i;
		}
	}
	
	if (min == n + 1)
		cout << "-1";
	else {
		cout << sum << '\n';
		cout << min;
	}
	return 0;
}