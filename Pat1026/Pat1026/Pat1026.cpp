#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	int K = (M - N) / 100;
	if ((M - N) % 100 >= 50) {
		K++;
	}
	int shi = K / 3600;
	K = K % 3600;
	int fen = K / 60;
	int miao = K % 60;
	printf("%02d:%02d:%02d", shi, fen, miao);
	return 0;
}


