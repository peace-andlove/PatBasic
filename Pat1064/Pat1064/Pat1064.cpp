#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int c = 0;
void prin(int n) {
	if (c != 0) {
		cout << " ";
	}
	else {
		c = 1;
	}
	cout << n;
}
int main() {
	int N, n;
	string str;
	cin >> N;
	set<int> s;
	for (int i = 0; i < N; i++) {
		cin >> str;
		n = 0;
		for (int j = 0; j < str.size(); j++) {
			n += str[j] - '0';
		}
		s.insert(n);
	}
	cout << s.size() << endl;
	for_each(s.begin(), s.end(), prin);
	return 0;
}