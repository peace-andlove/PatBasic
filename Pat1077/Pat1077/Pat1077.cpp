#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N, M;
	int min = 0;
	int max = 0;
	cin >> N >> M;
	int count = 0;
	int teacher = 0;
	int stu = 0;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		int count = 0;
		sum = 0;
		min = M;
		max = 0;
		cin >> teacher;
		for (int i = 0; i < N - 1; i++) {
			cin >> stu;
			if (stu >= 0 && stu <= M) {
				count++;
				sum += stu;
				if (stu > max) {
					max = stu;
				}
				if (stu < min) {
					min = stu;
				}
			}
		}
		sum = ((sum - min - max) / (count - 2) + teacher) / 2;
		cout << round(sum) << endl;
	}
	return 0;
}