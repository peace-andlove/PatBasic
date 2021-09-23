#include<iostream>
using namespace std;
int num[5];
int main() {
	int N;
	int M;
	int count = 0;
	bool t = false;
	bool f = false;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> M;
		//A1
		if (M % 2 == 0 && M % 5 == 0) {
			num[0] += M;
		}
		//A2
		if (M % 5 == 1) {
			t = true;
			if (f) {
				num[1] -= M;
				f = false;
			}
			else {
				num[1] += M;
				f = true;
			}
		}
		//A3
		if (M % 5 == 2) {
			num[2]++;
		}
		//A4
		if (M % 5 == 3) {
			num[3] += M;
			count++;
		}
		//A5
		if (M % 5 == 4 && M > num[4]) {
			num[4] = M;
		}
	}
	num[0] == 0 ? cout << "N " : cout << num[0] << " ";
	!t ? cout << "N " : cout << num[1] << " ";
	num[2] == 0 ? cout << "N " : cout << num[2] << " ";
	if (count == 0) {
		cout << "N ";
	}
	else {
		printf("%0.1f ", (num[3] + 0.0) / count);
	}
	num[4] == 0 ? cout << "N" : cout << num[4];
	return 0;
}