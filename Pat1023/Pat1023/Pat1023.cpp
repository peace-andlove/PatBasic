#include<iostream>
using namespace std;
int numss[10];
int main() {
	int n;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		numss[i] = n;
	}
	if (numss[0] == 0) {
		for (int i = 1; i < 10; i++) {
			for (int j = 0; j < numss[i]; j++) {
				cout << i;
			}
		}
	}
	else {
		//0不能为第一位 
		for (int i = 1; i < 10; i++) {
			if (numss[i] != 0) {
				cout << i;
				numss[i]--;
				break;
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < numss[i]; j++) {
				cout << i;
			}
		}
	}
	return 0;

}