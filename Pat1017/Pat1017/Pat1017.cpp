#include<iostream>
using namespace std;
int main() {
	string A;
	int B;
	int D = 0;
	cin >> A >> B;
	bool f = true;
	for (int i = 0; i < A.size(); i++) {
		if (f) {
			if ((D * 10 + A[i] - '0') / B != 0) {
				f = false;
				cout << (D * 10 + A[i] - '0') / B;
			}
		}
		else {
			cout << (D * 10 + A[i] - '0') / B;
		}
		D = (D * 10 + A[i] - '0') % B;

	}
	if (f) {
		cout << 0;
	}
	cout << " " << D;
	return 0;
}
