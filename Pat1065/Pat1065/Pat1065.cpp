#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int persons[100001];
int c = 0;
void prin(int n) {
	if (c != 0) {
		cout << " ";
	}
	else {
		c = 1;
	}
	printf("%05d", n);
}

int main() {
	int N, M, K;
	cin >> N;
	for (int i = 0; i < 2 * N; i++) {
		cin >> persons[i];
	}
	cin >> M;
	set<int> s;
	for (int i = 0; i < M; i++) {
		cin >> K;
		s.insert(K);
	}
	for (int i = 0; i < 2 * N; i += 2) {
		if (s.count(persons[i]) == 1 && s.count(persons[i + 1]) == 1) {
			s.erase(persons[i]);
			s.erase(persons[i + 1]);
		}
	}
	cout << s.size() << endl;
	for_each(s.begin(), s.end(), prin);
	return 0;
}