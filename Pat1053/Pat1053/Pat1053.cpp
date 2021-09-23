#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	int N, D, K;
	double e, h;
	int count = 0, countkk = 0, countk = 0;
	cin >> N >> e >> D;
	for (int i = 0; i < N; i++) {
		cin >> K;
		count = 0;
		for (int j = 0; j < K; j++) {
			cin >> h;
			if (h < e) {
				count++;
			}
		}
		if (count > K / 2) {
			if (K > D) {
				countk++;
			}
			else {
				countkk++;
			}
		}
	}
	printf("%.1f%% %.1f%%", (countkk * 100 + 0.0) / N, (countk * 100 + 0.0) / N);
	return 0;
}
