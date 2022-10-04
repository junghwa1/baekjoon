#include <iostream>
using namespace std;
int N = 0, k;

void merge(int *A, int, int, int);

void merge_sort(int *A, int p, int r) {// A[p..r]을 오름차순 정렬한다.
	if (N == 1)
		return;
	int q;
	if (p < r) {
		q = (p + r) / 2;       // q는 p, r의 중간 지점
		merge_sort(A, p, q);      // 전반부 정렬
		merge_sort(A, q + 1, r);  // 후반부 정렬
		merge(A, p, q, r);        // 병합
	}
}

// A[p..q]와 A[q + 1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q + 1..r]은 이미 오름차순으로 정렬되어 있다.
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
	while (i <= q)  // 왼쪽 배열 부분이 남은 경우
		tmp[t++] = A[i++];
	while (j <= r)  // 오른쪽 배열 부분이 남은 경우
		tmp[t++] = A[j++];
	i = p;
	t = 0;
	while (i <= r) { // 결과를 A[p..r]에 저장
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