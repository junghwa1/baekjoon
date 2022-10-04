#include <iostream>
using namespace std;
int N = 0, k;

void merge(int *A, int, int, int);

void merge_sort(int *A, int p, int r) {// A[p..r]�� �������� �����Ѵ�.
	if (N == 1)
		return;
	int q;
	if (p < r) {
		q = (p + r) / 2;       // q�� p, r�� �߰� ����
		merge_sort(A, p, q);      // ���ݺ� ����
		merge_sort(A, q + 1, r);  // �Ĺݺ� ����
		merge(A, p, q, r);        // ����
	}
}

// A[p..q]�� A[q + 1..r]�� �����Ͽ� A[p..r]�� �������� ���ĵ� ���·� �����.
// A[p..q]�� A[q + 1..r]�� �̹� ������������ ���ĵǾ� �ִ�.
void merge(int *A, int p, int q, int r) {
	if (N == 1)
		return;
	int *tmp = new int[r - p + 1];
	int i = p;
	int j = q + 1;
	int t = 0;
	while (i <= q && j <= r) {
		if (A[i] <= A[j])
			tmp[t++] = A[i++]; // tmp[t] < -A[i]; t++; i++;
		else tmp[t++] = A[j++]; // tmp[t] < -A[j]; t++; j++;
	}
	while (i <= q)  // ���� �迭 �κ��� ���� ���
		tmp[t++] = A[i++];
	while (j <= r)  // ������ �迭 �κ��� ���� ���
		tmp[t++] = A[j++];
	i = p;
	t = 0;
	while (i <= r) { // ����� A[p..r]�� ����
		A[i++] = tmp[t++];
		k--;
		if (k == 0) {
			N = 1;
			return;
		}
	}
}


int main() {
	int n;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	merge_sort(arr, 0, n - 1);
	if (k > 0)
		cout << -1;
	else
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";

	delete[] arr;
	return 0;
}