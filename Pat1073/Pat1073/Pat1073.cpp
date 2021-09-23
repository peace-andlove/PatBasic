#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int results[] = { 1,2,4,8,16 };
int cuo[101][5];
struct node {
	double score;
	int result;
};
int main() {
	int N, M, result, numt, numr;
	double score;
	string str;
	char c;
	cin >> N >> M;
	vector<node> v;
	for (int i = 0; i < M; i++) {
		result = 0;
		cin >> score >> numt >> numr;
		for (int j = 0; j < numr; j++) {
			cin >> c;
			result += results[c - 'a'];
		}
		v.push_back(node{ score,result });
	}
	cin.get();
	int count, n, resultT, maxCuo = 0;
	double scoreT;
	for (int j = 0; j < N; j++) {
		getline(cin, str);
		count = 0;
		scoreT = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				resultT = 0;
				n = str[i + 1] - '0';
				for (int k = 0; k < n; k++) {
					resultT += results[str[i + 3 + 2 * k] - 'a'];
				}
				int resultTT = resultT ^ v[count].result;
				if (resultTT) {
					if ((resultTT | resultT) == v[count].result) {
						scoreT += 0.5 * v[count].score;
					}
				}
				else {
					scoreT += v[count].score;
				}
				for (int l = 0; l < 5; l++) {
					int resultTTT = results[l] & resultTT;
					if (resultTTT == results[l]) {
						cuo[count][l]++;
						if (cuo[count][l] > maxCuo) {
							maxCuo = cuo[count][l];
						}
					}
				}
				count++;
			}
		}
		printf("%.1f\n", scoreT);
	}
	if (maxCuo == 0) {
		cout << "Too simple" << endl;
	}
	else {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < 5; j++) {
				if (cuo[i][j] == maxCuo) {
					cout << maxCuo << " " << i + 1 << "-" << char(j + 'a') << endl;
				}
			}
		}
	}
	return 0;
}