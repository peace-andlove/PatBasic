#include<iostream>
using namespace std;
int main() {
	int G1, G2, S1, S2, K1, K2;
	int G, S, K;
	scanf("%d.%d.%d %d.%d.%d", &G1, &S1, &K1, &G2, &S2, &K2);
	int C1, C2, C;
	C1 = G1 * 17 * 29 + S1 * 29 + K1;
	C2 = G2 * 17 * 29 + S2 * 29 + K2;
	if (C2 >= C1) {
		C = C2 - C1;

	}
	else {
		C = C1 - C2;
		cout << "-";
	}
	G = C / (17 * 29);
	S = C % (17 * 29) / 29;
	K = C % 29;
	printf("%d.%d.%d", G, S, K);

	return 0;
}
