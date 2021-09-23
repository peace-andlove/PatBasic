#include<iostream>
using namespace std;
int dat[100001];
int nex[100001];
int sorttotal[100001];
int add1[100001];
int add2[100001];
int add3[100001];
int addT[100001];
int main() {
	int first, N, K;
	cin >> first >> N >> K;
	int d;
	for (int i = 0; i < N; i++) {
		cin >> d;
		cin >> dat[d] >> nex[d];
	}
	int count1 = 0, count2 = 0, count3 = 0;
	int nextF = first;
	for (int i = 0; nextF != -1; i++) {
		if (dat[nextF] < 0) {
			add1[count1++] = nextF;
			nextF = nex[nextF];
		}
		else if (dat[nextF] <= K) {
			add2[count2++] = nextF;
			nextF = nex[nextF];
		}
		else {
			add3[count3++] = nextF;
			nextF = nex[nextF];
		}
	}
	int countTT = 0;
	for (int i = 0; i < count1; i++) {
		addT[countTT++] = add1[i];
	}
	for (int i = 0; i < count2; i++) {
		addT[countTT++] = add2[i];

	}
	for (int i = 0; i < count3; i++) {
		addT[countTT++] = add3[i];
	}
	for (int i = 0; i < countTT; i++) {
		if (i == countTT - 1) {
			printf("%05d %d %d", addT[i], dat[addT[i]], -1);
			cout << endl;
		}
		else {
			printf("%05d %d %05d", addT[i], dat[addT[i]], addT[i + 1]);
			cout << endl;
		}
	}
	return 0;
}