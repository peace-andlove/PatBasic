#include <iostream>
#include<set>
using namespace std;
string nums[1001];
int main() {
	int M, N, S;
	cin >> M >> N >> S;
	string name;
	set<string> s;
	if (S <= M) {
		for (int i = 0; i < M; i++) {
			cin >> nums[i];
			if (i == S - 1) {
				s.insert(nums[i]);
				cout << nums[i] << endl;
			}
		}
		for (int i = N + S - 1; i < M; i += N) {
			while (s.count(nums[i]) == 1) {
				i++;
			}
			s.insert(nums[i]);
			cout << nums[i] << endl;
		}
	}
	else {
		cout << "Keep going...";
	}
	return 0;
}