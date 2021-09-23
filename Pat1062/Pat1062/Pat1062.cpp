#include<iostream>
using namespace std;
int judge(int a, int b) {
	int c = a * b;
	int z = b;
	while (a % b != 0) {
		z = a % b;
		a = b;
		b = z;
	}
	return c / z;
}
int main() {
	int N1, M1, N2, M2, K, K1;
	scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
	int M = judge(judge(M1, M2), K);
	N1 *= M / M1;
	N2 *= M / M2;
	if (N2 < N1) {
		int n = N2;
		N2 = N1;
		N1 = n;
	}
	N1 = N1 / (M / K) + 1;
	if (N2 % (M / K) == 0) {
		N2 = N2 / (M / K) - 1;
	}
	else {
		N2 = N2 / (M / K);
	}
	bool f = false;
	for (int i = N1; i <= N2; i++) {

		if (judge(i, K) == i * K) {
			if (f) {
				cout << " ";
			}
			f = true;
			cout << i << "/" << K;
		}
	}

	return 0;
}