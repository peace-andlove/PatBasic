#include<iostream>
using namespace std;
int main() {
	int N;
	char A, B;
	cin >> N;
	int countA[] = { 0,0,0 };
	int countAA[] = { 0,0,0 };
	int countBB[] = { 0,0,0 };
	char r[] = { 'B','C','J' };
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		//b²¼ c´¸×Ó j¼ôµ¶ 
		if (A == 'C' && B == 'J') {
			countA[0]++;
			countAA[1]++;
			continue;
		}
		if (A == 'J' && B == 'C') {
			countA[2]++;
			countBB[1]++;
			continue;
		}
		if (A == 'C' && B == 'B') {
			countA[2]++;
			countBB[0]++;
			continue;
		}
		if (A == 'B' && B == 'C') {
			countA[0]++;
			countAA[0]++;
			continue;
		}
		if (A == 'J' && B == 'B') {
			countA[0]++;
			countAA[2]++;
			continue;
		}
		if (A == 'B' && B == 'J') {
			countA[2]++;
			countBB[2]++;
			continue;
		}
		countA[1]++;
	}

	printf("%d %d %d\n", countA[0], countA[1], countA[2]);
	printf("%d %d %d\n", countA[2], countA[1], countA[0]);
	int maxA = 0;
	int maxB = 0;
	for (int i = 0; i < 3; i++) {
		if (countAA[i] > countAA[maxA]) {
			maxA = i;
		}
		if (countBB[i] > countBB[maxB]) {
			maxB = i;
		}
	}
	cout << r[maxA] << " " << r[maxB];

	return 0;
}