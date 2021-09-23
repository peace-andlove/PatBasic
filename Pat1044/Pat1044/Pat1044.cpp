#include<iostream>
#include<string>
using namespace std;
string di[] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string gao[] = { "0","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
int main() {
	int N;
	string str;
	cin >> N;
	cin.get();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		if (str[0] >= '0' && str[0] <= '9') {
			int n = stoi(str);
			if (n / 13 > 0) {
				cout << gao[n / 13];
				if (n % 13 != 0) {
					cout << " " << di[n % 13];
				}
			}
			else {
				cout << di[n % 13];
			}

		}
		else {
			int sum = 0;
			if (str.size() <= 4) {
				for (int j = 0; j < 13; j++) {
					if (str == gao[j]) {
						sum = j * 13;
						break;
					}
					if (str == di[j]) {
						sum = j;
					}
				}
			}
			else {
				string str1 = str.substr(0, str.find(' '));
				string str2 = str.substr(str.find(' ') + 1);
				for (int j = 1; j < 13; j++) {//十位 
					if (str1 == gao[j]) {
						sum = j * 13;
						break;
					}
				}
				for (int j = 0; j < 13; j++) {//个位 
					if (str2 == di[j]) {
						sum += j;
						break;
					}
				}

			}
			cout << sum;
		}
		if (i != N - 1) {
			cout << endl;
		}
	}
}
