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
	sort(vnum.begin(), vnum.end(), cmp);//降序排序 

	int minN = sqrt(N);//n 
	int maxN;//m
	for (int i = minN; i >= 1; i--) {//计算出maxN和minN 
		if (N % i == 0) {
			maxN = N / i;
			minN = i;
			break;
		}
	}

	int arr[maxN][minN];
	fill(arr[0], arr[0] + maxN * minN, 0);//填充0 
	num = 0;

	int layer = maxN / 2 + maxN % 2;//需要绕layer圈 //解决测试点超时问题 
	for (int k = 0; k < layer; k++) {
		int min = minN - 1 - k;//定位该圈右下角的列坐标 
		int max = maxN - 1 - k;//定位该圈右下角的行坐标 
		for (int i = k; i <= min && num < N; i++)//遍历一整行 
			arr[k][i] = vnum[num++];

		for (int i = k + 1; i <= max - 1 && num < N; i++)//该列遍历少两个 
			arr[i][min] = vnum[num++];

		for (int i = min; i >= k && num < N; i--)//遍历一整行 
			arr[max][i] = vnum[num++];

		for (int i = max - 1; i >= k + 1 && num < N; i--)//该列遍历少两个 
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
