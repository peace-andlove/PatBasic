#include<iostream>
#include<set>
using namespace std;
int nums[101];
set<int> s;
class Compare {
public:
	bool operator()(int a, int b) {
		return a > b;
	};
};
//(3n+1)猜想验证函数 其中中间数字均添加在指定set中
void judge(int num) {
	if (num != 1) {
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = (3 * num + 1) / 2;
		}
	}
	while (num != 1)
	{
		s.insert(num);
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = (3 * num + 1) / 2;
		}
	}
}
int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		judge(nums[i]);
	}
	set<int, Compare> news;
	for (int i = 0; i < N; i++) {
		//不在中间数字set集合里的数字放置在待输出的set news里面
		if (s.count(nums[i]) == 0) {
			news.insert(nums[i]);
		}
	}
	//输出
	for (set<int>::iterator i = news.begin(); i != news.end(); i++) {
		if (i != news.begin()) {
			cout << " ";
		}
		cout << *i;
	}
	return 0;
}
