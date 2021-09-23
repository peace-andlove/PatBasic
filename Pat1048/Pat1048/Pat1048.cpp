#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string A, B;
	cin >> A >> B;
	int lenA = A.size();
	int lenB = B.size();
	for (int i = 0; i < abs(lenA - lenB); i++) {
		if (lenA >= lenB) {
			B = '0' + B;
		}
		else {
			A = '0' + A;
		}
	}
	lenA = A.size();
	lenB = B.size();
	for (int i = 0; i < lenA; i++) {
		if (lenB % 2 == 0) {
			if (B[i] >= A[i]) {
				cout << B[i] - A[i];
			}
			else {
				cout << B[i] - A[i] + 10;
			}
		}
		else {
			int n = A[i] - '0' + B[i] - '0';
			if (n % 13 < 10) {
				cout << n % 13;
			}
			if (n % 13 == 10) {
				cout << 'J';
			}
			if (n % 13 == 11) {
				cout << 'Q';
			}
			if (n % 13 == 12) {
				cout << 'K';
			}
		}
		lenB--;
	}
	return 0;
}