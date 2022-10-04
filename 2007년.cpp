#include <iostream>
#include <string>
using namespace std;


int main() {
	int x, y, t=0;
	string arr[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	cin >> x >> y;
	string day=arr[0];
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < x - 1; i++) {
		t += month[i];
	}
	t += y;
	
	cout << arr[(t-1) % 7];


	return 0;
}