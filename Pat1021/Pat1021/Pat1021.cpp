#include<iostream>
using namespace std;
int nums[10];
int main() {
	string num;
	cin >> num;
	for (int i = 0; i < num.size(); i++) {
		nums[num[i] - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		if (nums[i] != 0) {
			cout << i << ":" << nums[i] << endl;
		}
	}
	return 0;
}