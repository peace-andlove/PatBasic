#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node {
	string name;
	int tall;
};
bool cmp(node a, node b) {
	if (a.tall == b.tall)
		return a.name < b.name;
	else
		return a.tall > b.tall;
}
int main() {
	int N, K;
	cin >> N >> K;
	vector<node>vstu;

	node tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp.name >> tmp.tall;
		vstu.push_back(tmp);
	}

	sort(vstu.begin(), vstu.end(), cmp);

	int ftmp = N / K + N % K;//��һ������ 
	string vlist[K][ftmp];
	int index = 0;
	for (int i = 0; i < K; i++) {
		int num = N / K;//ÿ������ 
		if (i == 0) {//��һ��
			num += N % K;
		}
		int mid = (num / 2 + 1) - 1;//�м����� 
		vlist[i][mid] = vstu[index++].name;

		for (int j = 1; mid + j < num || mid - j >= 0; j++) {
			if (mid - j >= 0)
				vlist[i][mid - j] = vstu[index++].name;//�� 

			if (mid + j < num)
				vlist[i][mid + j] = vstu[index++].name;//�� 
		}
	}
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < ftmp; j++) {
			if (vlist[i][j] != "") {
				if (j != 0)
					cout << " ";
				cout << vlist[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}