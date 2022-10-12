#include <stdio.h>
#include <stdlib.h>

int main() {
	int N,a;
	int counting[10001] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		counting[a]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (counting[i]) {
			for (int j = 0; j < counting[i]; j++)
				printf("%d\n", i);
		}
	}
	return 0;
}