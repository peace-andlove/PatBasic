#include<iostream>
#include<string>
using namespace std;
void judge(string str) {
	//判断是否PAT三个字母全都包括
	if (str.find('A') == 4294967295 || str.find('P') == 4294967295 || str.find('T') == 4294967295) {
		cout << "NO" << endl;
		return;
	}
	//判断PT均只有一个 且PT先后顺序为PT
	if (str.find_first_of('P') != str.find_last_of('P')) {
		cout << "NO" << endl;
		return;
	}
	if (str.find_first_of('T') != str.find_last_of('T')) {
		cout << "NO" << endl;
		return;
	}
	if (str.find('P') > str.find('T')) {
		cout << "NO" << endl;
		return;
	}
	//判断是否包含除PAT之外的其他字母
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != 'P' && str[i] != 'A' && str[i] != 'T') {
			cout << "NO" << endl;
			return;
		}
	}
	int a1 = str.find('P');//P之前A的个数
	int t = str.find('T');
	int a2 = t - a1 - 1;//PT之间A的个数
	int a3 = str.size() - t - 1;//T之后A的个数
	//是否为xPATx 的格式
	if (a2 == 1 && a1 == a3) {
		cout << "YES" << endl;
		return;
	}
	//判断是否为xPn*ATn*x的格数
	if (a2 > 1 && a3 == a2 * a1) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
	return;
}
int main() {
	int N;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		judge(str);
	}
	return 0;
}
