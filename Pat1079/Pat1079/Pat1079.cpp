#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool judge(string num) {
	for (int i = 0, j = num.size() - 1; i < j; i++, j--) {
		if (num[i] != num[j]) {
			return false;
		}
	}

	return true;
}
int main() {
	string num1;
	string num2;
	int count = 10;
	cin >> num1;
	while (count-- && !judge(num1)) {
		string result = "";
		int sum;
		int next = 0;
		num2 = num1;
		reverse(num2.begin(), num2.end());
		for (int i = num1.size() - 1; i >= 0; i--) {
			sum = num1[i] - '0' + num2[i] - '0' + next;
			next = sum / 10;
			result = to_string(sum % 10) + result;
		}
		if (next != 0) {
			result = to_string(next) + result;
		}
		cout << num1 << " + " << num2 << " = " << result << endl;
		num1 = result;
	}
	if (count > 0)
		cout << num1 << " is a palindromic number.";
	else
		cout << "Not found in 10 iterations.";
	return 0;
}