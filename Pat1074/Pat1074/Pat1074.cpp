#include<iostream>
#include<string>
using namespace std;
int main() {
	string N, M, K;
	cin >> N >> M >> K;
	string temp;
	N = "0" + N;
	while (M.size() < N.size()) {
		M = "0" + M;
	}
	while (K.size() < N.size()) {
		K = "0" + K;
	}
	int n = 0;//进制
	int shi = 0;//进位
	int num = 0;
	string s = "";
	for (int i = M.size() - 1; i >= 0; i--) {
		if (N[i] == '0') {
			n = 10;
		}
		else {
			n = N[i] - '0';
		}
		num = M[i] - '0' + K[i] - '0' + shi;
		shi = num / n;
		num = num % n;
		s = to_string(num) + s;
	}
	s = to_string(shi) + s;
	bool flag = false;
	for (int i = 0; i < s.size(); i++) {
		if (!flag) {
			if (s[i] != '0') {
				flag = true;
			}
		}
		if (flag) {
			cout << s[i];
		}
	}
	if (!flag) {
		cout << 0;
	}
	return 0;
}