#include<iostream>
using namespace std;
int main() {
	string N;
	string str = "";
	cin >> N;
	int len = N.size();
	for (int i = 0; i < len; i++) {
		//��λ
		if (len - i == 1) {
			for (int j = 0; j < N[i] - '0'; j++) {
				str += j + 1 + '0';
			}
		}
		//ʮλ
		if (len - i == 2) {
			for (int j = 0; j < N[i] - '0'; j++) {
				str += "S";
			}
		}
		//��λ
		if (len - i == 3) {
			for (int j = 0; j < N[i] - '0'; j++) {
				str += "B";
			}
		}
	}
	cout << str;
	return 0;
}
