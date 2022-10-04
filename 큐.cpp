#include <iostream>
#include <cstring>
using namespace std;

int front = -1;
int rear = -1;

void enq(int* A, int a) {
	A[++rear] = a;
}

int deq(int* A) {
	if (front == rear)
		return -1;
	return A[++front];
}

int main() {
	int n,k;
	char com[6];
	cin >> n;
	int* arr = new int[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> com;
		if (strcmp(com, "push")==0) {
			cin >> k;
			enq(arr, k);
		}
		else if (strcmp(com, "pop")==0) {
			cout << deq(arr) << "\n";
		}
		else if (strcmp(com, "size")==0)
			cout << rear - front << "\n";
		else if (strcmp(com, "empty")==0) {
			if (front == rear)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (strcmp(com, "front")==0) {
			if (front == rear)
				cout << -1 << "\n";
			else
				cout << arr[front + 1] << "\n";
		}
		else if (strcmp(com, "back")==0) {
			if (front == rear)
				cout << -1 << "\n";
			else
				cout << arr[rear] << "\n";
		}
	}

	delete[] arr;

	return 0;
}