#include<iostream>
#include<string>
using namespace std;
int main() {
	string right;
	string guess;
	int n;
	cin >> right >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		getline(cin, guess);
		if (guess == "#") {
			break;
		}
		if (guess == right) {
			cout << "Welcome in" << endl;
			break;
		}
		else {
			cout << "Wrong password: " << guess << endl;
			if (i == n - 1) {
				cout << "Account locked" << endl;
			}
		}

	}
	return 0;
}