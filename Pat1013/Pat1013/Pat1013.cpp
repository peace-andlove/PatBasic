#include<iostream>
#include<cmath>
using namespace std;
bool judge(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int N, M;
	cin >> N >> M;
	int count = 0;
	int realcount = 0;
	int num = 2;
	while (count < M) {
		if (judge(num)) {
			count++;

			if (count >= N) {
				cout << num;
				realcount++;
				if (realcount == 10) {
					cout << endl;
					realcount = 0;
				}
				else if (count != M) {
					cout << " ";
				}
			}
		}
		num++;
	}
	return 0;
}