#include <iostream>	
using namespace std;




int main() {
	char s[11];
	int top = -1;
	char n[11];
	cin >> n;
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <10; j++) {
			if (n[j] == '0'+i) {
				top++;
				s[top] = n[j];
			}
		}
	}

	while (top != -1) {
		cout << s[top--];
	}


	return 0;
}