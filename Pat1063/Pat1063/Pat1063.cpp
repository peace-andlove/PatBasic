#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N;
	int m, n;
	double result = 0;
	double r;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n >> m;
		r = sqrt(n * n + m * m);
		if (result < r) {
			result = r;
		}
	}
	printf("%.2f", result);

	return 0;
}
