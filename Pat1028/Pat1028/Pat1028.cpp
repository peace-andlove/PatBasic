#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct node {
	string name;
	string date;
};
bool Comp(node n1, node n2) {
	return n1.date > n2.date;
}
int main() {
	int N;
	cin >> N;
	int count = 0;
	string name;
	string date;
	//ÄêÁäµÄ·¶Î§Îª
	string mindate = "18140906";
	string maxdate = "20140906";
	vector<node> v;
	for (int i = 0; i < N; i++) {
		cin >> name >> date;
		date.erase(7, 1);//É¾µô/
		date.erase(4, 1);
		if (date >= mindate && date <= maxdate) {
			count++;
			node n;
			n.name = name;
			n.date = date;
			v.push_back(n);
		}
	}
	sort(v.begin(), v.end(), Comp);
	int len = v.size();
	if (len > 0)
		cout << len << " " << v[len - 1].name << " " << v[0].name;
	else
		cout << "0";
	return 0;
}