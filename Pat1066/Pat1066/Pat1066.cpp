#include<iostream>
using namespace std;
int nums[501][501];
int main() {
	int M, N, A, B, hui, K;
	cin >> M >> N >> A >> B >> hui;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> K;
			if (K >= A && K <= B) {
				nums[i][j] = hui;
			}
			else {
				nums[i][j] = K;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (j != 0) {
				printf(" %03d", nums[i][j]);
			}
			else {
				printf("%03d", nums[i][j]);
			}
		}
		cout << endl;
	}
	return 0;
}