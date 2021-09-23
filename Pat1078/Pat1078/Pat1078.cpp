#include<iostream>
#include<string>
using namespace std;
int main() {
	char s;
	string str;
	string newStr = "";
	cin >> s;
	cin.get();
	getline(cin, str);
	char num;
	int count = 0;
	if (s == 'C') {
		for (int i = 0; i < str.size(); i++) {
			if (str.size() == 1) {
				cout << str;
				break;
			}
			if (count == 0) {
				num = str[i];
				count++;
			}
			else {
				if (str[i] == num) {
					count++;
				}
				else {
					if (count != 1) {
						cout << count;
					}
					cout << num;
					num = str[i];
					count = 1;

				}
				if (str.size() - 1 == i) {
					if (count != 1) {
						cout << count;
					}
					cout << num;
				}
			}
		}
	}
	else {
		count = 0;
		newStr = "";
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= '0' && str[i] <= '9') {
				count++;
				newStr += str[i];
				/*for (int j = 0; j < str[i - 1]-'0'; j++) {
					cout << str[i];
				}*/
			}
			else if (count != 0) {
				int k = stoi(newStr);
				for (int j = 0; j < k; j++) {
					cout << str[i];
				}
				count = 0;
				newStr = "";
			}
			else if (count == 0) {
				cout << str[i];
			}
		}
	}

	return 0;
}