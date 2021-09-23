#include<iostream>
#include<string>
using namespace std;
int main() {
	string badstr;
	string str;
	getline(cin, badstr);
	cin >> str;
	if (badstr == "\n") {
		cout << str;
	}
	else {
		string addstr = "";
		for (int i = 0; i < badstr.size(); i++) {
			if (badstr[i] >= 'A' && badstr[i] <= 'Z') {
				addstr += badstr[i] + 32;
			}
			if (badstr[i] >= 'a' && badstr[i] <= 'z') {
				addstr += badstr[i] - 32;
			}
		}
		badstr += addstr;
		if (badstr.find('+') != 18446744073709551615) {
			badstr += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		}
	}
	for (int i = 0; i < str.size(); i++) {
		if (badstr.find(str[i]) == 18446744073709551615) {
			cout << str[i];
		}
	}
	return 0;
}