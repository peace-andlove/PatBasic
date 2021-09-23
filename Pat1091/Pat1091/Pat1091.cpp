#include<iostream>
#include<string>
using namespace std;
int main() {

	int M,K,N;
	bool f;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> K;
		f = true;
		for (int j = 1; j < 10; j++) {
			string s = to_string(j * K * K);
			string k = to_string(K);
			if (s.substr(s.size() - k.size()) == k) {
				cout << j << " " << s<<endl;
				f = false;
				break;
			}
		}
		if (f) {
			cout << "No" << endl;
		}
	}
	return 0;
}