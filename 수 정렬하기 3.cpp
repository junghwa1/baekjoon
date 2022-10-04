#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int counting[10001] = { 0, };
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;

	for (int i = 0; i < n; i++) {
		cin >> a;
		++counting[a];
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < counting[i]; j++)
			cout << i << "\n";
	}

	return 0;
}