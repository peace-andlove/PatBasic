#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;
struct node {
	string id;
	int gp;
	int gm;
	int gf;
	int g;
};
bool cmp(node n1, node n2) {
	if (n1.g != n2.g) {
		return n1.g > n2.g;
	}
	return n1.id < n2.id;
}
int main() {
	int P, M, N;
	string s;
	int score;
	int count = 1;
	cin >> P >> M >> N;
	map<string, int> idx;
	vector<node> v;
	vector<node> vf;
	for (int i = 0; i < P; i++) {
		cin >> s >> score;
		if (score >= 200 && score <= 900) {
			v.push_back(node{ s,score,-1,-1,0 });
			idx[s] = count++;
		}
	}
	for (int i = 0; i < M; i++) {
		cin >> s >> score;
		if (idx[s] != 0 && score >= 0 && score <= 100) {
			v[idx[s] - 1].gm = score;
		}
	}
	for (int i = 0; i < N; i++) {
		cin >> s >> score;
		if (idx[s] != 0 && score >= 0 && score <= 100) {
			v[idx[s] - 1].gf = score;
			if (v[idx[s] - 1].gm > score) {
				v[idx[s] - 1].g = round(0.6 * score + 0.4 * v[idx[s] - 1].gm);

			}
			else {
				v[idx[s] - 1].g = score;
			}
			if (v[idx[s] - 1].g >= 60) {
				vf.push_back(v[idx[s] - 1]);
			}
		}
	}
	sort(vf.begin(), vf.end(), cmp);
	for (auto i : vf) {
		cout << i.id << " " << i.gp << " " << i.gm << " " << i.gf << " " << i.g << endl;
	}

	return 0;
}