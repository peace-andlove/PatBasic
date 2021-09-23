#include<iostream>
#include<algorithm>
using namespace std;
int nums[100001];
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	sort(nums, nums + N, cmp);
	int n = 0;
	for (int i = 0; i < N; i++) {
		if (nums[i] > i + 1) {
			n = i + 1;
		}
		else {
			break;
		}
	}
	cout << n;
	return 0;
}