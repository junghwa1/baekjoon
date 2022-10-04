#include <iostream>
using namespace std;

int main() {
	int n, i, j, k, b = 0, count = 0;
	cin >> n;
	char a;
	char *arr = new char[100];
	for (int t = 0; t < n; t++) {
		b = 0;
		j = 0;
		i = 0;
		cin >> arr;
		a = arr[0];
		while (arr[j] != NULL) {
			i = j;
			while (arr[i] == arr[i + 1])
				i++;
			k = i + 1;
			while (arr[k] != NULL) {
				if (arr[i] == arr[k]) {
					b=1;
					break;
				}
				k++;
			}
			if (b == 1) {
				count--;
				break;
			}
			j = i+1;
		}
		
		count++;
	}
	cout << count;
	return 0;
}