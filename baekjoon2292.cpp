#include <iostream>

using namespace std;

int main() {
	int a, b = 0, c = 0, i = 6;
	cin >> a;
	while (a - 1 > b) {
		b += i;
		c++;
		i += 6;
	}
	if (a == 1)
		cout << 1;
	else
		cout << c + 1;

	return 0;
}