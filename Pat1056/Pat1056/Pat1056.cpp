#include<iostream>
#include<algorithm>
using namespace std;
int nums[11];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	int sum = 0;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			//数字两两组合 每组数字有两个顺序 12 21  两数之和即为各×11之后再相加
			sum += nums[i] * 11 + nums[j] * 11;
		}
	}
	cout << sum;
	return 0;
}