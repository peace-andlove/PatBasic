#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;
}
int increase(int num) {
	string str = to_string(num);
	sort(str.begin(), str.end());//Ĭ������
	return stoi(str);
}

int decrease(int num) {//��������ʱ��Ҫע�⴫������num���ܲ���4λ�����ں��油0 
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
		res = N;//��һ�ν�� 
		N = decrease(res) - increase(res);//���ν��  
		if (flag == 0 || N != res)//��һ�ֱ����ӡ 
			printf("%04d - %04d = %04d\n", decrease(res), increase(res), N);
		flag = 1;
	}
	return 0;
}
