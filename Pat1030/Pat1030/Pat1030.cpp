#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N;
	long long p;
	cin >> N >> p;
	vector<int> vnum;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		vnum.push_back(num);
	}
	sort(vnum.begin(), vnum.end());
	int len = vnum.size();
	int max = 0;
	for (int j = 0; j < len; j++) {
		for (int i = j + max; i < len; i++) {
			if (vnum[i] <= vnum[j] * p) {
				num = i - j + 1;
				if (max < num) {
					max = num;
				}

			}
			else {
				break;
			}
		}
	}
	printf("%d", max);
	return 0;
}