#include <iostream>
using namespace std;

int main() {
	int i = 0, count=0;
	char n[101] = {0,};
	cin >> n;

	while (n[i] != 0) {
		if ((97 <= n[i] && n[i] <= 122)) {
			switch (n[i]) {
			case 'c':
				if ((n[i + 1] == '=') || (n[i + 1] == '-'))
					i++;
				break;
			case 'd':
				if (n[i + 1] == '-')
					i++;
				else if ((n[i + 1] == 'z') && (n[i + 2]) == '=')
					i += 2;
				break;
			case 'l':
				if (n[i + 1] == 'j')
					i++;
				break;
			case 'n':
				if (n[i + 1] == 'j')
					i++;
				break;
			case 's':
				if (n[i + 1] == '=')
					i++;
				break;
			case 'z':
				if (n[i + 1] == '=')
					i++;
				break;

			}
			count++;
			i++;
		}
		else {
			i++;
		}
	}

	cout << count;

	return 0;
}