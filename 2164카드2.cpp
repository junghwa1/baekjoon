#include <iostream>
#include <queue>


using namespace std;


int main() {
	queue<int> q;
	
	int N, last_card;

	cin >> N;

	for (int i = 0; i < N; i++) {
		q.push(i+1);
	}

	while (!q.empty()) {
		last_card = q.front();
		q.pop();
		if (q.empty())
			break;
		last_card = q.front();
		q.pop();
		q.push(last_card);
	}

	cout << last_card;

	return 0;
}

