#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int f[] = { 1,2,4,8,16 };
int countresult[101];
struct node {
	int score;
	int result;
};
int main() {
	int N, M;
	cin >> N >> M;
	int s, n, c, sum;
	char k;
	vector<node> v;
	for (int i = 0; i < M; i++) {
		cin >> s >> n >> c;
		sum = 0;
		for (int j = 0; j < c; j++) {
			cin >> k;
			sum += f[k - 'a'];
		}
		node n;
		n.score = s;
		n.result = sum;
		v.push_back(n);
	}
	int sumscore = 0;
	string str;
	cin.get();
	int maxcount = 0;
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		int count = 0;
		sumscore = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				sum = 0;
				c = str[j + 1] - '0';
				for (int l = 0; l < c; l++) {
					sum += f[str[j + 3 + l * 2] - 'a'];
				}
				if (sum != v[count].result) {
					countresult[count]++;
					if (maxcount < countresult[count]) {
						maxcount = countresult[count];
					}
				}
				else {
					sumscore += v[count].score;
				}
				count++;
			}
		}
		cout << sumscore << endl;
	}
	if (maxcount == 0) {
		cout << "Too simple";
	}
	else {
		cout << maxcount;
		for (int i = 0; i < M; i++) {
			if (countresult[i] == maxcount) {
				cout << " " << i + 1;
			}
		}
	}

	return 0;
}