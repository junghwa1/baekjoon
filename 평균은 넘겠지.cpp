#include <iostream>
using namespace std;

int main() {
	int case_num;
	int std_num;
	int sum=0;
	float ave;
	int count = 0;

	cin >> case_num;

	float *rate = new float[case_num];

	for (int i = 0; i < case_num; i++) {
		cin >> std_num;
		int *c=new int[std_num];

		for (int j = 0; j < std_num; j++) {
			cin >> c[j];
			sum += c[j];
		}
		ave = sum / std_num;
		for (int n = 0; n < std_num; n++) {
			if (ave < c[n])
				count++;
		}
		rate[i] = count / std_num;

		delete[] c;
	}

	for (int i = 0; i < case_num; i++) {
		cout << rate[i] << endl;
	}

	delete[] rate;


	return 0;
}