#include<iostream>
#include<string>
using namespace std;
int main4() {
	string numbe;
	cin >> numbe;
	char n = numbe[0];//�������ֵķ���
	if (n == '-') {
		cout << "-";
	}
	//.��λ�ÿ϶���3
	string zhengshu = numbe.substr(1, 1);//��������
	int E = numbe.find('E');//E��λ��
	char m = numbe[E + 1];//��ѧ�������ķ���
	string xiaoshu = numbe.substr(3, E - 3);// С������
	int weiyi = stoi(numbe.substr(E + 2));//λ�Ʋ��ֵ�����
	if (m == '+') {
		//����Ҫ��0
		if (weiyi < xiaoshu.size()) {
			cout << zhengshu << xiaoshu.substr(0, weiyi) << '.' << xiaoshu.substr(weiyi);
		}
		else {//��0
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