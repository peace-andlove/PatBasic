#include<iostream>
#include<string>
using namespace std;
int nums[26];
int main() {
	string str;
	getline(cin, str);
	int max = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			nums[str[i] - 'a']++;
			if (nums[str[i] - 'a'] > max) {
				max = nums[str[i] - 'a'];
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			nums[str[i] - 'A']++;
			if (nums[str[i] - 'A'] > max) {
				max = nums[str[i] - 'A'];
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (nums[i] == max) {
			cout << (char)('a' + i) << " " << max;
			break;
		}
	}
	return 0;
}




