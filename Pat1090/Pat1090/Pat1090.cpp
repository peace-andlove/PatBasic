#include<iostream>
#include<set>
using namespace std;
int nums[20000];
int main() {
	int N, M,k,m;
	bool f;
	cin >> N >> M;
	for (int i = 0; i < N * 2; i++) {
		cin >> nums[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> k;
		set<int> s;
		for (int j = 0; j < k; j++) {
			cin >> m;
			s.insert(m);
		}
		f = true;
		for (int i = 0; i < N; i++) {
			if (s.count(nums[2 * i]) == 1 && s.count(nums[2 * i + 1]) == 1) {
				f = false;
				cout << "No" << endl;
				break;
			}
		}
		if (f) {
			cout << "Yes" << endl;
		}
	}
	return 0;
}