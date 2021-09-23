#include<iostream>
#include<cmath>
using namespace std;
int ids[10001][2];
bool judge(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ids[i][0];
	}
	int K, M;
	bool f;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> M;
		f = true;
		for (int j = 0; j < N; j++) {
			if (M == ids[j][0]) {
				if (ids[j][1] == 1) {
					printf("%04d: Checked\n", M);
					f = false;
					break;
				}
				else {
					if (j == 0) {
						printf("%04d: Mystery Award\n", M);
					}
					else if (judge(j + 1)) {
						printf("%04d: Minion\n", M);
					}
					else {
						printf("%04d: Chocolate\n", M);
					}
					f = false;
					ids[j][1]++;
					break;
				}
			}
		}
		if (f) {
			printf("%04d: Are you kidding?\n", M);
		}
	}
	return 0;
}