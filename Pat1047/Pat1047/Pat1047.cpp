#include<iostream>
#include<string>
using namespace std;
int score[1001];
int main() {
	int N;
	cin >> N;
	int s;
	string n;
	int sum = 0;
	int sumindex = 0;
	for (int i = 0; i < N; i++) {
		cin >> n >> s;
		int k = stoi(n.substr(0, n.find('-')));
		score[k] += s;
		if (score[k] > sum) {
			sum = score[k];
			sumindex = k;
		}
	}
	cout << sumindex << " " << sum;
	return 0;
}