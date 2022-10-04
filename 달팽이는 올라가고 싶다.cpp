#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	int current=0, day=0;

	cin >> A >> B >> V;
	
	V = V - A + (A - B);
	if (V % (A - B) == 0) {
		
		day= V / (A - B);
	}
	else
		day = V / (A - B)+1;
	
	
	cout << day;

	return 0;
}