#include<iostream>
using namespace std;
int nums[1001];
int main() {
	int N, M,K,max;
	cin >> N >> M;
	max = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> K;
			nums[j] += K;
			if (nums[j] > max) {
				max = nums[j];
			}
		}
	}
	cout << max << endl;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (nums[i] == max) {
			if (count != 0) {
				cout << " ";
			}
			cout << i + 1;
			count++;
		}
	}
	return 0;
}