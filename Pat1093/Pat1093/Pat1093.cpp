#include<iostream>
#include<string>
using namespace std;
int nums[130];
int main() {
	string A, B;
	getline(cin, A);
	getline(cin, B);
	A = A + B;
	for (int i = 0; i < A.size(); i++) {
		if (nums[A[i]] == 0) {
			cout << A[i];
			nums[A[i]]++;
		}
	}
	return 0;
}
