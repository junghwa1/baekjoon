#include <iostream>
using namespace std;


int main() {
	int i;
	cin >> i;
	int temp;
	int a, b;
	int count = 0;
	temp = i;


	while (0<=i&&i<=99) {

		a = i / 10;
		b = i % 10;
		a = (a+b) % 10;
		i = b * 10 + a;
		count++;
		if (temp == i)
			break;
	}
	
	cout << count;
	return 0;
}