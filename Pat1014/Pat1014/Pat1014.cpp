#include<iostream>
using namespace std;
string str[4];
string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
int main() {
	cin >> str[0] >> str[1] >> str[2] >> str[3];
	int count = 0;
	for (int i = 0; i < str[0].size(); i++) {
		if (count == 0) {//判断约会的日期
			if (str[0][i] >= 'A' && str[0][i] <= 'G' && str[0][i] == str[1][i]) {
				cout << day[str[0][i] - 'A'] << " ";
				count++;
			}
		}
		else {//判断约会的小时
			if (str[0][i] == str[1][i] && ((str[0][i] >= 'A' && str[0][i] <= 'N') || (str[0][i] >= '0' && str[0][i] <= '9'))) {
				if (str[0][i] >= 'A' && str[0][i] <= 'N') {
					cout << str[0][i] - 'A' + 10 << ":";
				}
				else {
					printf("%02d:", str[0][i] - '0');
				}
				break;
			}
		}
	}
	//判断约会的具体分钟数
	for (int i = 0; i < str[2].size(); i++) {
		if (str[2][i] == str[3][i] && ((str[2][i] >= 'A' && str[2][i] <= 'Z') || (str[2][i] >= 'a' && str[2][i] <= 'z'))) {
			printf("%02d", i);
			break;
		}
	}
	return 0;
}