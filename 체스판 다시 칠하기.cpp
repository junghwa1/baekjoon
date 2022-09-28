#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	char **chess = new char*[N];
	for (int i = 0; i < N; i++){	
		chess[i] = new char[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}
	char BW[2] = { 'B','W' };
	char WB[2] = { 'W','B' };
	int black = 0;
	int white = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (M % 2 == 0) {
				if (chess[i][j] != BW[(i+j) % 2])
					black++;
			}
			else if(chess[i][j] != BW[j % 2])
				black++;

		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (M % 2 == 0) {
				if (chess[i][j] != WB[(i + j) % 2])
					white++;
			}
			else if (chess[i][j] != WB[j % 2])
				white++;	
		}
	}

	cout << (black < white) ? black : white;

	return 0;
}