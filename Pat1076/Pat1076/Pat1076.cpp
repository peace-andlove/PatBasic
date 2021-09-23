#include<iostream>
#include<string>
using namespace std;
int main() {
	int N, n;
	string str;
	string sum = "";
	cin >> N;
	cin.get();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		int n = str.find("T");
		sum += str[n - 2] - 'A' + '1';
	}
	cout << sum;
	return 0;
}