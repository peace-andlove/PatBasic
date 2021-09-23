#include<iostream>
using namespace std;
int score[101];
int main() {

	int N;
	cin >> N;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		score[n]++;
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		if (i != 0) {
			cout << " ";
		}
		cin >> n;
		cout << score[n];
	}
	return 0;
}