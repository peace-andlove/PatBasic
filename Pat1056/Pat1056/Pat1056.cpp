#include<iostream>
#include<algorithm>
using namespace std;
int nums[11];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	int sum = 0;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			//����������� ÿ������������˳�� 12 21  ����֮�ͼ�Ϊ����11֮�������
			sum += nums[i] * 11 + nums[j] * 11;
		}
	}
	cout << sum;
	return 0;
}