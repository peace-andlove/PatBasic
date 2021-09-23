#include<iostream>
using namespace std;
int nums[101];
int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> nums[i];
	}
	int countA, countB;
	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			countA = 0; countB = 0;
			for (int k = 1; k <= N; k++) {
				if (k != i && k != j) {//k是好人
					if (nums[k] > 0&&(nums[k]==i||nums[k]==j)) {
						countA++;
					}
					if (nums[k] < 0 && nums[k] !=- i && nums[k] != -j) {
						countA++;
					}
				}
				else {//k是坏人
					if (nums[k] > 0 && (nums[k] == i || nums[k] == j)) {
						countB++;
					}
					if (nums[k] < 0 && nums[k] != -i && nums[k] != -j) {
						countB++;
					}
				}
			}
			if (countA == 1 && countB == 1) {
				cout << i << " " << j;
				return 0;
			}

		}
	}
	cout << "No Solution";
	return 0;
}