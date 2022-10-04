#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin >> n;

	while (n != 1) {
		i = 2;
		while (n%i!=0)
			i++;
		n /= i;
		cout << i<<"\n";
	}



	return 0;
}