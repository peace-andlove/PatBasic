#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double R1, P1, R2, P2;
	cin >> R1 >> P1 >> R2 >> P2;
	double A = R1 * R2 * cos(P1 + P2);
	double B = R1 * R2 * sin(P1 + P2);
	if (A<0.01 && A>-0.01) {
		A = 0;
	}
	if (B<0.01 && B>-0.01) {
		B = 0;
	}
	if (B >= 0) {
		printf("%.2f+%.2fi", A, B);
	}
	else {
		printf("%.2f%.2fi", A, B);
	}
	return 0;
}