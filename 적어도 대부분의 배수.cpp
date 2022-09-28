#include <iostream>
using namespace std;

int main() {
	int* arr = new int[5];
	int count = 0, a=0,k=1;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	while (count < 3) {
		a++;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if ((arr[i]*a) % arr[j]==0) {
					count++;
					
					arr[i] = 0;

				}
				if (count == 3)
					break;
			}
			if (count == 3)
				break;
		}
		
	}

	cout << k;

	return 0;
}