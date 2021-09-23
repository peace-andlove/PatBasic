#include<iostream>
#include<string>
using namespace std;
int num[6][2] = { 'P',0,'A',0,'T',0,'e',0,'s',0,'t',0 };
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'P') {
			num[0][1]++;
		}
		if (str[i] == 'A') {
			num[1][1]++;
		}
		if (str[i] == 'T') {
			num[2][1]++;
		}
		if (str[i] == 'e') {
			num[3][1]++;
		}
		if (str[i] == 's') {
			num[4][1]++;
		}
		if (str[i] == 't') {
			num[5][1]++;
		}
	}
	for (int i = 0; num[0][1] + num[1][1] + num[2][1] + num[3][1] + num[4][1] + num[5][1] > 0; i++) {
		if (i == 6) {
			i = 0;
		}
		if (num[i][1] > 0) {
			cout << (char)num[i][0];
			num[i][1]--;
		}
	}
	return 0;
}
