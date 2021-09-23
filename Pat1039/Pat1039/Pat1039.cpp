#include<iostream>
using namespace std;
int have[75];
int need[75];
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		have[s1[i] - '0']++;
	}
	for (int i = 0; i < s2.size(); i++) {
		need[s2[i] - '0']++;
	}
	int count = 0;
	for (int i = 0; i < 75; i++) {
		if (have[i] < need[i]) {
			count += need[i] - have[i];
		}
	}
	if (count > 0) {
		cout << "No " << count;
	}
	else {
		cout << "Yes " << s1.size() - s2.size();
	}
	return 0;
}