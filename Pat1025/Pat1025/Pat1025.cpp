#include<iostream>
#include<algorithm>
using namespace std;
int datad[100001];//存放数据
int nextd[100001];//存放下一个地址
int the[100001];//存放链表的顺序
int main() {
	int first;
	int geshu;
	int xunhuan;
	int d;
	cin >> first >> geshu >> xunhuan;

	for (int i = 0; i < geshu; i++) {
		cin >> d;
		cin >> datad[d] >> nextd[d];
	}
	int sum = 0;
	while (first != -1)
	{
		the[sum] = first;
		first = nextd[the[sum]];
		sum++;
	}
	for (int i = 0; i < sum / xunhuan; i++) {
		reverse(the + i * xunhuan, the + (i + 1) * xunhuan);
	}
	for (int i = 0; i < sum - 1; i++) {
		printf("%05d %d %05d\n", the[i], datad[the[i]], the[i + 1]);
	}
	printf("%05d %d %d\n", the[sum - 1], datad[the[sum - 1]], -1);
	return 0;
}