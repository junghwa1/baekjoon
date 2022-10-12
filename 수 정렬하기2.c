#include <stdio.h>
#include <stdlib.h>



void merge(int* A, int left, int mid, int right) {
	int l;
	int i = left;
	int j = mid + 1;
	int k = left;
	int* temp = (int*)malloc(sizeof(int)*(right + 1));

	while (i <= mid && j <= right) {
		if (A[i] <= A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
	}

	if (i > mid) {
		for (l = j; l <= right; l++)
			temp[k++] = A[l];
	}
	else {
		for (l = i; l <= mid; l++)
			temp[k++] = A[l];
	}

	for (int a = left; a <= right; a++) {
		A[a] = temp[a];
	}

	free(temp);
}

void mergesort(int*A, int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergesort(A, left, mid);
		mergesort(A, mid + 1, right);
		merge(A, left, mid, right);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	mergesort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}


	free(arr);
	return 0;
}