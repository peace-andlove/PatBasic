#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node {
	int id;
	int de;
	int cai;
};
class Comp {
public:
	bool operator()(node n1, node n2) {
		if (n1.de + n1.cai != n2.de + n2.cai) {
			return n1.de + n1.cai > n2.de + n2.cai;
		}
		else if (n1.de != n2.de) {
			return n1.de >= n2.de;
		}
		else {
			return n1.id < n2.id;
		}
	}
};
void prin(node n) {
	printf("%d %d %d\n", n.id, n.de, n.cai);
}
int main() {
	int N, N1, N2;
	int count = 0;
	cin >> N >> N1 >> N2;
	vector<node> v[4];
	for (int i = 0; i < N; i++) {
		node stu;
		cin >> stu.id >> stu.de >> stu.cai;
		//判断是否及格
		if (stu.de >= N1 && stu.cai >= N1) {
			//记录及格人数
			count++;
			//安招题目要求对把及格的学生分为四类
			if (stu.de >= N2 && stu.cai >= N2) {
				v[0].push_back(stu);
			}
			else if (stu.de >= N2) {
				v[1].push_back(stu);
			}
			else if (stu.de >= stu.cai) {
				v[2].push_back(stu);
			}
			else {
				v[3].push_back(stu);
			}
		}
	}
	//排序
	for (int i = 0; i < 4; i++) {
		sort(v[i].begin(), v[i].end(), Comp());
	}
	cout << count << endl;
	//遍历输出
	for (int i = 0; i < 4; i++) {
		for_each(v[i].begin(), v[i].end(), prin);
	}
	return 0;
}