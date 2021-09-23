#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool judge(long long n) {
	if (n == 1 || n == 0) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int L, K;
	string str;
	cin >> L >> K >> str;
	if (K > L) {
		cout << 404;
		return 0;
	}
	for (int i = 0; i < L - K + 1; i++) {
		if (judge(stoll(str.substr(i, K)))) {
			cout << str.substr(i, K);
			return 0;
		}

	}
	cout << 404;
	return 0;
}