#include<iostream>
using namespace std;
int num[101];
int main() {
	int N, M;//NΪ���鳤�� MΪ����λ��
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		//(M+1)%N Ϊλ��֮�����ֵ�λ��
		cin >> num[(M + i) % N];
	}
	//˳�������������
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << num[i];
	}
	return 0;
}
