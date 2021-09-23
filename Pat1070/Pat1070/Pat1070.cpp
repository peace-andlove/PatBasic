#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double nums[10001];
int main() {
	int N;
	cin >> N;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	sort(nums, nums + N);
	sum = nums[0];
	for (int i = 1; i < N; i++) {
		sum = (sum + nums[i]) / 2;
	}
	cout << floor(sum);
	return 0;
}