#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//�����п��ܻ��ļ�
string strs = "_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//��¼ÿ������Ӧλ���Ƿ�ȷ���� 1 Ϊ�Ѿ�ȷ���𻵲���� 0Ϊ��һ��ȷ����
int f[36];
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int j = 0;
	for (int i = 0; i < str1.size(); i++) {
		//�ַ��������
		if (str1[i] == str2[j]) {
			j++;
		}
		else {
			//�ַ��� �ж��Ƿ������
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