#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int getcount(string arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == '[') {
			count++;
		}
	}
	return count;
}
void printface(string arr, int num) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == '[') {
			count++;
		}
		if (count == num) {
			cout << arr.substr(i + 1, arr.find(']', i) - i - 1);
			return;
		}
	}
}
int main() {
	string hands, eyes, mouth;
	getline(cin, hands);
	getline(cin, eyes);
	getline(cin, mouth);
	int handcount = getcount(hands);
	int eyecount = getcount(eyes);
	int mouthcount = getcount(mouth);
	int N;
	cin >> N;
	int lefthand, lefteye, mymouth, righteye, righthand;
	for (int i = 0; i < N; i++) {
		cin >> lefthand >> lefteye >> mymouth >> righteye >> righthand;
		if (lefthand > 0 && lefthand <= handcount && lefteye > 0 && lefteye <= eyecount && mymouth > 0 && mymouth <= mouthcount
			&& righteye > 0 && righteye <= eyecount && righthand > 0 && righthand <= handcount) {
			printface(hands, lefthand);
			cout << "(";
			printface(eyes, lefteye);
			printface(mouth, mymouth);
			printface(eyes, righteye);
			cout << ")";
			printface(hands, righthand);
			cout << endl;
		}
		else {
			cout << "Are you kidding me? @\\/@\n";
		}
	}
}