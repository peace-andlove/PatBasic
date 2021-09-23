#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N, num;
	cin >> N;
	vector<int> v;
	vector<int> vsort;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		vsort.push_back(num);
	}
	int flag;
	//�ҵ����һ�����������
	for (flag = 0; flag < N && vsort[flag] <= vsort[flag + 1]; flag++) {};
	flag++;
	int i;
	//�ж����򲿷��ǲ��Ǻ�δ����������ȫ��ͬ
	for (i = flag; i < N && vsort[i] == v[i]; i++);
	//��������
	if (i == N) {
		cout << "Insertion Sort" << endl;
		//����
		sort(v.begin(), v.begin() + flag + 1);
	}
	else {
		//�鲢����
		cout << "Merge Sort" << endl;
		int num = 1;
		bool flag2 = true;
		while (flag2 == 1) {
			flag2 = false;
			for (int i = 0; i < N; i++) {
				if (v[i] != vsort[i])
					flag2 = true;
			}
			num *= 2; //�ϲ��������һ��,�ϲ��ĸ�������һ�ε����� 
			for (int k = 0; k < N / num; k++)
				sort(v.begin() + k * num, v.begin() + (k + 1) * num);
			sort(v.begin() + N - N % num, v.end());
		}
	}
	for (int i = 0; i < N; i++) {
		if (i != 0)cout << " ";
		cout << v[i];
	}
	return 0;
}