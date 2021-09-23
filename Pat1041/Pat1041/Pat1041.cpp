#include<iostream>
using namespace std;
string strs[1001];//存放准考证号
int nums[1001];//存放考试座位号
int main() {
	int N, K;
	int no;
	string nos;
	int n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nos >> no >> n;
		//以试机做为号码为下标存放准考证号和考试座位号
		strs[no] = nos;
		nums[no] = n;
	}
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> no;
		cout << strs[no] << " " << nums[no] << endl;
	}
	return 0;
}