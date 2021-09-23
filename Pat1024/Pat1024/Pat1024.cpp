#include<iostream>
#include<string>
using namespace std;
int main4() {
	string numbe;
	cin >> numbe;
	char n = numbe[0];//整个数字的符号
	if (n == '-') {
		cout << "-";
	}
	//.的位置肯定是3
	string zhengshu = numbe.substr(1, 1);//整数部分
	int E = numbe.find('E');//E的位置
	char m = numbe[E + 1];//科学计数法的符号
	string xiaoshu = numbe.substr(3, E - 3);// 小数部分
	int weiyi = stoi(numbe.substr(E + 2));//位移部分的数字
	if (m == '+') {
		//不需要补0
		if (weiyi < xiaoshu.size()) {
			cout << zhengshu << xiaoshu.substr(0, weiyi) << '.' << xiaoshu.substr(weiyi);
		}
		else {//补0
			cout << zhengshu << xiaoshu;
			for (int i = 0; i < weiyi - xiaoshu.size(); i++) {
				cout << 0;
			}
		}
	}
	else {
		cout << "0.";
		for (int i = 0; i < weiyi - 1; i++) {
			cout << 0;
		}
		cout << zhengshu << xiaoshu;
	}
	return 0;
}