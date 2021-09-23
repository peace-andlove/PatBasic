#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
struct node {
	string name;
	double score;
	int count;
};
bool cmp(node n1, node n2) {
	if ((int)n1.score != (int)n2.score) {
		return (int)n1.score > (int)n2.score;
	}
	if (n1.count != n2.count) {
		return n1.count < n2.count;
	}
	return n1.name < n2.name;
}
int main() {
	int N;
	cin >> N;
	string id, school;
	unordered_map<string, int> mc;
	unordered_map<string, double> ms;
	double score;
	for (int i = 0; i < N; i++) {
		cin >> id >> score >> school;
		transform(school.begin(), school.end(), school.begin(), ::tolower);
		mc[school]++;
		if (id[0] == 'T') {
			ms[school] += 1.5 * score;
		}
		if (id[0] == 'B') {
			ms[school] += score / 1.5;
		}
		if (id[0] == 'A') {
			ms[school] += score;
		}
	}
	vector<node> v;
	for (auto m : mc) {
		v.push_back({ m.first,ms[m.first],m.second, });
	}
	sort(v.begin(), v.end(), cmp);
	int count = 1;
	int countc = v[0].score;
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		if (countc == (int)v[i].score) {
			cout << count << " " << v[i].name << " " << (int)v[i].score << " " << v[i].count << endl;
		}
		else {
			cout << i + 1 << " " << v[i].name << " " << (int)v[i].score << " " << v[i].count << endl;
			count = i + 1;
			countc = v[i].score;
		}
	}
	return 0;
}