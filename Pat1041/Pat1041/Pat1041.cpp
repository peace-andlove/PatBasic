#include<iostream>
using namespace std;
string strs[1001];//���׼��֤��
int nums[1001];//��ſ�����λ��
int main() {
	int N, K;
	int no;
	string nos;
	int n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nos >> no >> n;
		//���Ի���Ϊ����Ϊ�±���׼��֤�źͿ�����λ��
		strs[no] = nos;
		nums[no] = n;
	}
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> no;
		cout << strs[no] << " " << nums[no] << endl;
	}
	return 0;
}