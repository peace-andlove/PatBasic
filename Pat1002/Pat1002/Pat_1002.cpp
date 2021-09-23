#include<iostream>
#include<string>
using namespace std;
int main2() {
	string str;
	//strs数组存放数字对应的拼音
	string strs[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	//获取输入的数字，因为输入的数字超出int 
	//long long 的范围，所以使用string接收
	cin >> str;
	int N = 0;
	//遍历字符串求得各位数字之和
	for (int i = 0; i < str.size(); i++) {
		N += str[i] - '0';
	}
	// 将int 数字转为string
	str = to_string(N);
	//遍历字符串 输出数字对应的拼音
	for (int i = 0; i < str.size(); i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << strs[str[i] - '0'];
	}
	return 0;
}
