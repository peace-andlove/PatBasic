#include<iostream>
using namespace std;
int main() {
	int N;
	char c;
	cin >> N >> c;
	for (int i = 0; i < N; i++) {
		cout << c;
	}
	cout << endl;
	int n = N / 2 + N % 2 - 2;
	for (int i = 0; i < n; i++) {
		cout << c;
		for (int i = 0; i < N - 2; i++) {
			cout << " ";
		}
		cout << c << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << c;
	}
	return 0;
}