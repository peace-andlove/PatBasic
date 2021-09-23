#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main() {
	int N;
	vector<int>vnum;
	int num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		vnum.push_back(num);
	}
	sort(vnum.begin(), vnum.end(), cmp);//�������� 

	int minN = sqrt(N);//n 
	int maxN;//m
	for (int i = minN; i >= 1; i--) {//�����maxN��minN 
		if (N % i == 0) {
			maxN = N / i;
			minN = i;
			break;
		}
	}

	int arr[maxN][minN];
	fill(arr[0], arr[0] + maxN * minN, 0);//���0 
	num = 0;

	int layer = maxN / 2 + maxN % 2;//��Ҫ��layerȦ //������Ե㳬ʱ���� 
	for (int k = 0; k < layer; k++) {
		int min = minN - 1 - k;//��λ��Ȧ���½ǵ������� 
		int max = maxN - 1 - k;//��λ��Ȧ���½ǵ������� 
		for (int i = k; i <= min && num < N; i++)//����һ���� 
			arr[k][i] = vnum[num++];

		for (int i = k + 1; i <= max - 1 && num < N; i++)//���б��������� 
			arr[i][min] = vnum[num++];

		for (int i = min; i >= k && num < N; i--)//����һ���� 
			arr[max][i] = vnum[num++];

		for (int i = max - 1; i >= k + 1 && num < N; i--)//���б��������� 
			arr[i][k] = vnum[num++];
	}

	for (int j = 0; j < maxN; j++) {
		for (int i = 0; i < minN; i++) {
			if (i != 0)printf(" ");
			printf("%d", arr[j][i]);
		}
		printf("\n");
	}
	return 0;

}
