#include<iostream>
using namespace std;
int main() {
	int N;
	int count = 0;
	cin >> N;
	while (N != 1) {//n==1Ê±½áÊøÑ­»·
		count++;
		if (N % 2 == 0) {
			N /= 2;
		}
		else {
			N = (3 * N + 1) / 2;
		}
	}
	cout << count;
	return 0;
}
