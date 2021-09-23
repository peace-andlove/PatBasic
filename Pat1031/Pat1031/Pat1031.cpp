#include<iostream>
using namespace std;
int num[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
string strs = "10X98765432";
int main() {
	int N;
	bool f = true;
	bool b = true;
	cin >> N;
	string str;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> str;
		sum = 0;
		b = true;
		for (int j = 0; j < 17; j++) {
			if (str[j] >= '0' && str[j] <= '9') {
				sum += num[j] * (str[j] - '0');
			}
			else {
				b = false;
				f = false;
				break;
			}
		}
		if (b) {
			sum %= 11;
			if (strs[sum] != str[17]) {
				cout << str << endl;
				f = false;
			}
		}
		else { cout << str << endl; }
	}
	if (f) { cout << "All passed"; }
	return 0;
}