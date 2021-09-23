#include<iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int count = 0, countT = 0, countP = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'T') {
			countT++;
		}
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'P') {
			countP++;
		}
		if (str[i] == 'T') {
			countT--;
		}
		if (str[i] == 'A') {
			count = (count + countP * countT) % 1000000007;
		}
	}
	cout << count;
	return 0;
}
