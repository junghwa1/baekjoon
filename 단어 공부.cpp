#include <iostream>
#include <string>
using namespace std;

int main() {
	char n[1000000];
	int max = 0, i = 0, k = 0;
	cin >> n;
	int a[26] = { 0 };
	while (n[i]) {
		if (65 <= n[i] && n[i] <= 90)
			a[n[i] - 65]++;
		else if (97 <= n[i] && n[i] <= 122)
			a[n[i] - 97]++;
		i++;
	}
	for (int j = 0; j < 26; j++) {
		if (a[max] < a[j])
			max = j;
	}
	for (int j = 0; j < 26; j++) {
		if (a[max] == a[j])
			k++;
	}

	if (k > 1)
		cout << "?";
	else
		cout << (char)(max+65);

	return 0;
}