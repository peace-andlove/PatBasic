#include<iostream>
using namespace std;
int main() {
	bool f = true;
	int m, n;
	cin >> m >> n;
	if (n == 0) {//0多项式的特殊情况
		cout << "0 0";
	}
	else {
		while (true) {
			if (n != 0) {
				if (!f) {
					cout << " " << m * n << " " << n - 1;
				}
				else {
					cout << m * n << " " << n - 1;
					f = false;
				}
			}
			//退出循环的条件
			if (cin.get() == '\n') {
				break;
			}
			cin >> m >> n;
		}
	}
	return 0;
}