#include<iostream>
#include<string>
using namespace std;
int main() {
	string A, C;
	char B, D;
	string E = "";
	string F = "";
	cin >> A >> B >> C >> D;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] == B) {
			E += B;
		}
	}
	for (int i = 0; i < C.size(); i++) {
		if (C[i] == D) {
			F += D;
		}
	}
	int a = 0;
	int b = 0;
	if (E != "") {
		a = stoi(E);
	}
	if (F != "") {
		b = stoi(F);
	}
	cout << a + b;

	return 0;
}
