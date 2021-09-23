#include<iostream>
#include<cmath>
using namespace std;
//ÅĞ¶ÏÊÇ·ñÎªËØÊı
bool judge(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int N;
	cin >> N;
	int count = 0;
	for (int i = 3; i < N - 1; i += 2) {
		if (judge(i) && judge(i + 2)) {
			count++;
		}
	}
	cout << count;
	return 0;
}
