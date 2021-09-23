#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

long long getmaxnum(long long a, long long b) {

	return b == 0 ? a : getmaxnum(b, a % b);
}

void simple(long long  zi, long long  mu) {
	if (zi < 0) { cout << "("; } //打印括号 
	if (zi % mu == 0) {
		printf("%d", zi / mu);
	}
	else {
		int tmp = abs(getmaxnum(zi, mu));//最大公因数 
		zi /= tmp;//最简分子、分母 
		mu /= tmp;
		if (abs(zi) > mu) {//分子大于分母
			int pre = zi / mu;
			int newzi = abs(zi % mu);
			printf("%d %lld/%lld", pre, newzi, mu);
		}
		else//分子小于分母 
		{
			printf("%lld/%lld", zi, mu)
		};
	}
	if (zi < 0) { cout << ")"; } //打印括号 
}
int main() {
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);

	long long res1 = a1 * b2 + a2 * b1;
	simple(a1, b1); printf(" + "); simple(a2, b2); printf(" = "); simple(res1, b1 * b2); printf("\n");

	long long res2 = a1 * b2 - a2 * b1;
	simple(a1, b1); printf(" - "); simple(a2, b2); printf(" = "); simple(res2, b1 * b2); printf("\n");

	simple(a1, b1); printf(" * "); simple(a2, b2); printf(" = "); simple(a1 * a2, b1 * b2); printf("\n");

	simple(a1, b1); printf(" / "); simple(a2, b2); printf(" = ");
	if (a2 == 0) { cout << "Inf"; }
	else if (a2 < 0) {
		simple((-1) * a1 * b2, abs(a2 * b1));
	}
	else { simple(a1 * b2, a2 * b1); }
	return 0;
}