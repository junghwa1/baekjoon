#include <iostream>
using namespace std;

int main() {
	int i=1,n,t;
	int c, p;
	cin >> n;

	while(1) {
		t = n - (i*(i + 1)) / 2;
		if (t <= 0)
			break;
		i++;
	}
	p = 1 - t;
	c = i+1-p;
	if(i%2==1)
		cout << p << "/" << c;
	else
		cout << c << "/" << p;
	return 0;
}