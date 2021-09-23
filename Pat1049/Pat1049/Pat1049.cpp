#include<iostream>
using namespace std;
int main() {
	int N;
	long double n;
	long double sum = 0;
	cin >> N;
	int M = N;
	for (int i = 1; i <= N; i++) {
		cin >> n;
		sum += n * i * M;
		M--;
	}
	printf("%0.2llf", sum);
	return 0;
}