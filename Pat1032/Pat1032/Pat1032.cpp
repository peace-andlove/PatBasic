#include<iostream>
using namespace std;
int sum[100001];
int main() {
	int N;
	cin >> N;
	int n;
	int score;
	for (int i = 0; i < N; i++) {
		cin >> n >> score;
		sum[n] += score;
	}
	n = 1;
	for (int i = 0; i < N; i++) {
		if (sum[i] > sum[n]) {
			n = i;
		}
	}
	cout << n << " " << sum[n];
	return 0;
}