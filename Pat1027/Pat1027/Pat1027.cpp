#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N;
	char M;
	cin >> N >> M;
	//���k һ����2*k-1��
	int K = sqrt((N + 1) / 2);
	N -= K * K * 2 - 1;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 2 * (K - i) - 1; j > 0; j--) {
			cout << M;
		}
		cout << endl;
	}
	for (int i = 1; i < K; i++) {
		for (int j = K - i - 1; j > 0; j--) {
			cout << " ";
		}
		for (int j = 2 * i + 1; j > 0; j--) {
			cout << M;
		}
		cout << endl;
	}
	cout << N;
	return 0;
}