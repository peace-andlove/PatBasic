#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct node {
	bool check;
	string id;
};
bool judge(int num) {
	if (num == 1) { return false; }
	if (num == 2) { return true; }
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int N,M;
	cin >>N;
	vector<node> v;
	for (int i = 0; i < N; i++) {
		node n;
		cin >> n.id;
		n.check = false;
		v.push_back(n);
	}
	cin >> M;
	string str;
	bool flag = true;
	for (int i = 0; i < M; i++) {
		cin >> str; flag = true;
		for (int j = 0; j < v.size(); j++) {
			if (v[j].id == str&&v[j].check==false) {
				flag = false;
				v[j].check = true;
				if (j==0) {
				cout <<v[j].id << ": Mystery Award" << endl;
				}
				else if (judge(j + 1)) {
				cout << v[j].id << ": Minion" << endl;
				}
				else {
					cout << v[j].id << ": Chocolate" << endl;
				}
				break;
			}
			else if (v[j].id == str && v[j].check == true) {
				flag = false;
				cout << v[j].id << ": Checked" << endl;
				break;
			}
		}
		if (flag) {
			cout << str << ": Are you kidding?" << endl;
		}
	}
	return 0;
}