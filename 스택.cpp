#include <iostream>
#include <cstring>
using namespace std;

int top = -1;

void push(int *arr, int a) {
	arr[++top]=a;
}

int pop(int *arr) {
	if (top == -1)
		return -1;
	return arr[top--];
}

int main() {
	int n, val;
	int arr[10000];
	char com[6];
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> com;
		if (strcmp(com,"push")==0) {
			cin >> val;
			push(arr, val);
		}
		else if (strcmp(com, "pop")==0) {
			cout << pop(arr)<<"\n";
		}
		else if (strcmp(com, "size")==0) {
			cout << top + 1 << "\n";
		}
		else if (strcmp(com, "empty")==0) {
			if (top == -1)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (strcmp(com, "top")==0) {
			if (top == -1)
				cout << -1 << "\n";
			else
				cout << arr[top] << "\n";
		}
	}

	return 0;
}