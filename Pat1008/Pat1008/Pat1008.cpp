#include<iostream>
using namespace std;
int num[101];
int main() {
	int N, M;//N为数组长度 M为右移位置
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		//(M+1)%N 为位移之后数字的位置
		cin >> num[(M + i) % N];
	}
	//顺序输出最终数组
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << num[i];
	}
	return 0;
}
