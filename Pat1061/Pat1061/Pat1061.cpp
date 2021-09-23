#include<iostream>
using namespace std;
int score[101];
int result[101];
int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> result[i];
	}
	int n, sum;
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = 0; j < M; j++) {
			cin >> n;
			if (n == result[j]) {
				sum += score[j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}