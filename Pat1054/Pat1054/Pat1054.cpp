#include<iostream> 
#include<string>
using namespace std;
bool judgeIsNum(char c) {//判断是否为数字 
	if (c - '0' < 10 && c - '0' >= 0) {
		return true;
	}
	return false;
}
int main() {
	int N;
	string str;
	cin >> N;
	double sum = 0;
	int numcount = 0;
	for (int i = 0; i < N; i++) {
		cin >> str;
		int pointFlag = 0;
		int fcount = 0;//计算小数点位数 
		int j;
		for (j = 0; j < str.size(); j++) {
			if (pointFlag == 1)
				fcount++;//计算小数点位数 	
			if (fcount > 2) { break; }
			if (pointFlag == 0 && str[j] == '.' && j != 0) {
				pointFlag = 1;//小数点存在的标志 
			}
			else if (judgeIsNum(str[j]) || (j == 0 && str[j] == '-')) {
			}
			else {
				break;
			}
		}

		if (j >= str.size()) {
			double fNumber = stod(str);
			if (fNumber <= 1000 && fNumber >= -1000) {
				sum = fNumber + sum;
				numcount++;
			}
			else {
				cout << "ERROR: " << str << " is not a legal number" << endl;
			}
		}
		else {
			cout << "ERROR: " << str << " is not a legal number" << endl;
		}
	}

	cout << "The average of " << numcount << " number";
	if (numcount != 1)
		cout << "s";
	cout << " is ";

	if (numcount > 0)
		printf("%.2lf", sum / double(numcount));
	else
		cout << "Undefined";
	return 0;
}
