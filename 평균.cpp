#include <iostream>
using namespace std;

int main() {
	int n;
	float ave,sum=0,M=0;
	
	cin >> n;
	float *arr = new float[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (M <= arr[i])
			M = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / M * 100;
	}

	for (int i = 0; i < n; i++) {
		sum = sum+arr[i];
	}
	ave = sum / n;
	cout << ave;
	return 0;
}