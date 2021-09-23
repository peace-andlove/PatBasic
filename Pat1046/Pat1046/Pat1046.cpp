#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int A, A2, B, B2;
	int countA = 0, countB = 0;
	for (int i = 0; i < N; i++) {
		cin >> A2 >> A >> B2 >> B;
		if (A == A2 + B2 && B != A2 + B2) {
			countB++;
		}
		if (A != A2 + B2 && B == A2 + B2) {
			countA++;
		}
	}
	cout << countA << " " << countB;
	return 0;
}