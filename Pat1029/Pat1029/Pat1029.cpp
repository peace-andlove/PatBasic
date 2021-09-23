#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//所有有可能坏的键
string strs = "_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//记录每个键对应位置是否确定损坏 1 为已经确定损坏并输出 0为第一次确定损坏
int f[36];
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int j = 0;
	for (int i = 0; i < str1.size(); i++) {
		//字符正常输出
		if (str1[i] == str2[j]) {
			j++;
		}
		else {
			//字符损坏 判断是否已输出
			if (str1[i] == '_') {
				if (f[0] == 0) {
					cout << str1[i];
					f[0]++;
				}
			}
			if (str1[i] >= '0' && str1[i] <= '9') {
				if (f[str1[i] - '0' + 1] == 0) {
					cout << str1[i];
					f[str1[i] - '0' + 1]++;
				}
			}
			if (str1[i] >= 'A' && str1[i] <= 'Z') {
				if (f[str1[i] - 'A' + 11] == 0) {
					cout << strs[str1[i] - 'A' + 11];
					f[str1[i] - 'A' + 11]++;
				}
			}
			if (str1[i] >= 'a' && str1[i] <= 'z') {
				if (f[str1[i] - 'a' + 11] == 0) {
					cout << strs[str1[i] - 'a' + 11];
					f[str1[i] - 'a' + 11]++;
				}
			}
		}

	}
	return 0;
}