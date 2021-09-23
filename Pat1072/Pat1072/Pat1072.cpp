#include<iostream>
#include<set>
using namespace std;
int main() {
	int N, M;
	set<int> s;
	cin >> N >> M;
	int k;
	for (int i = 0; i < M; i++) {
		cin >> k;
		s.insert(k);
	}
	string name;
	int n;
	int K, cou;
	int count = 0;
	int countK = 0;
	bool f = false;
	for (int i = 0; i < N; i++) {
		cin >> name >> n;
		f = false;
		cou = 0;
		for (int j = 0; j < n; j++) {
			cin >> K;
			if (s.count(K) == 1) {
				countK++;
				f = true;
				if (cou == 0) {
					cout << name << ":";
				}
				cou++;
				printf(" %04d", K);
			}
		}
		if (f) {
			count++;
			cout << endl;
		}
	}
	cout << count << " " << countK;

}