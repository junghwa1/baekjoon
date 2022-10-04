#include <iostream>
using namespace std;


int main() {
	int N, M;
	int T_F=1;

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int k;
		cin >> k;
		int* arr = (int*)malloc(sizeof(int)*k);
		for (int j = 0; j < k; j++) {
			cin >> arr[j];
		}
		for (int j = 1; j < k; j++) {
			if (arr[j] > arr[j - 1])
				T_F = 0;
		}
		free(arr);
	}

	if (T_F == 1)
		cout << "Yes";
	else
		cout << "No";



	return 0;
}