#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int nums[100001];
int numsort[100001];
int zhu[100001];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		numsort[i] = nums[i];
	}
	int count = 0;
	int max = 0;
	sort(numsort, numsort + N);
	for (int i = 0; i < N; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
		//同位置上数字相同且该数字排序前就是左最大 
		if (nums[i] == numsort[i] && max == nums[i]) {
			zhu[count++] = nums[i];
		}
	}
	cout << count << endl;
	for (int i = 0; i < count; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << zhu[i];
	}
	cout << endl;
	return 0;
}