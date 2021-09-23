#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;
}
int increase(int num) {
	string str = to_string(num);
	sort(str.begin(), str.end());//默认升序
	return stoi(str);
}

int decrease(int num) {//降序排序时需要注意传进来的num可能不足4位，需在后面补0 
	string str = to_string(num);
	while (str.size() < 4) {
		str = str + '0';
	}
	sort(str.begin(), str.end(), cmp);
	return stoi(str);
}
int main() {
	int N;
	cin >> N;
	int res = -1;
	int flag = 0;
	while (N != res) {
		res = N;//上一次结果 
		N = decrease(res) - increase(res);//本次结果  
		if (flag == 0 || N != res)//第一轮必须打印 
			printf("%04d - %04d = %04d\n", decrease(res), increase(res), N);
		flag = 1;
	}
	return 0;
}
