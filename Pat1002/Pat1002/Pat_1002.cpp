#include<iostream>
#include<string>
using namespace std;
int main2() {
	string str;
	//strs���������ֶ�Ӧ��ƴ��
	string strs[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	//��ȡ��������֣���Ϊ��������ֳ���int 
	//long long �ķ�Χ������ʹ��string����
	cin >> str;
	int N = 0;
	//�����ַ�����ø�λ����֮��
	for (int i = 0; i < str.size(); i++) {
		N += str[i] - '0';
	}
	// ��int ����תΪstring
	str = to_string(N);
	//�����ַ��� ������ֶ�Ӧ��ƴ��
	for (int i = 0; i < str.size(); i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << strs[str[i] - '0'];
	}
	return 0;
}
