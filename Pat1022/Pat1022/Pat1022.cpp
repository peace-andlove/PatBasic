#include<iostream>
#include<string>
using namespace std;
int main() {
	int A, B, D;
	cin >> A >> B >> D;
	A += B;
	string str = "";
	if (D == 10 || A == 0) {
		cout << A;
	}
	else {
		while (A != 0)
		{
			str = to_string(A % D) + str;
			A = A / D;
		}
	}
	cout << str;
	return 0;
}