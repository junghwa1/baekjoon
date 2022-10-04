#include <iostream>
using namespace std;

int main() {
	int n,t, ans=0;
	cin >> n >> t;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		if (t - arr[i] >= 0) {
			ans += t / arr[i];
			t = t % arr[i];
		}
	}
	cout << ans;
	delete[] arr;
	return 0;
}