#include <iostream>
using namespace std;

int main() {
	int n, count=0;
	cin >> n;
	do {
		if (n % 5 == 0)
			break;
		n -= 3;
		count += 1;
	} while (n>=3);

	if (n % 3 == 0 || n % 5 == 0)
		cout << count + n / 5;
	else
		cout << "-1";
	return 0;
}