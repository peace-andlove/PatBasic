#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
struct node {
	string name;
	string id;
	int score;
};
bool comp(node stu1, node stu2) {
	if (stu1.score != stu2.score) {
		return stu1.score > stu2.score;
	}
	return stu1.id > stu2.id;
};
int main() {
	int N;
	cin >> N;
	vector<node> v;
	for (int i = 0; i < N; i++) {
		node stu;
		cin >> stu.name >> stu.id >> stu.score;
		v.push_back(stu);
	}
	//����
	sort(v.begin(), v.end(), comp);
	//�ֱ�����ɼ���ߺͳɼ���͵�ѧ������Ϣ
	cout << v[0].name << " " << v[0].id << endl;
	cout << v[N - 1].name << " " << v[N - 1].id << endl;
	return 0;
}
