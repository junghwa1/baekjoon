#include <iostream>
#include <string>
using namespace std;


int main() {
	int num,count=0;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
		cin >> arr[i];

	for (int i = 0; i < num; i++) {
		if (arr[i] == 1)
			count--;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				count--;
				break;
			}
		}
		count++;
	}
	cout << count;

	return 0;
}