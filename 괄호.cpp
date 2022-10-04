#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, j;
	int en = 0, de = 0;
	char arr[51];
	cin >> n;

	for (int i = 0; i < n; i++) {
		j = 0;
		en = 0;
		de = 0;
		cin >> arr;
		while (arr[j] != '\0') {
			if (en<de)
				break;
			if (arr[j] == '(')
				en++;
			else if (arr[j] == ')')
				de++;
			j++;
		}
		if (en == de)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}

	return 0;
}