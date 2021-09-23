#include<iostream>
#include<string>
using namespace std;
int main() {
	string d, str;
	int N;
	cin >> d >> N;
	if (N == 1) {
		cout << d;
		return 0;
	}
	int countN = 2;
	d += '1';
	while (countN < N)
	{
		countN++;
		str = "";
		char c = d[0];
		int count = 1;
		for (int i = 1; i < d.size(); i++) {
			if (d[i] == c) {
				count++;
			}
			else {
				str += c + to_string(count);
				c = d[i];
				count = 1;
			}
			if (i == d.size() - 1) {
				str += c + to_string(count);

			}
		}
		d = str;
	}
	cout << d;
	return 0;
}