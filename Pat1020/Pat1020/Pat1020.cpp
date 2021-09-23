#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int yue[1001];
int price[1001];
struct node {
	double have;
	double price;
	double simpleprice;
};
bool cmp(node n1, node n2) {
	return n1.simpleprice > n2.simpleprice;
}
int main() {
	int M;
	double N;
	cin >> M >> N;
	double sum = 0;
	vector<node> v;
	for (int i = 0; i < M; i++) {
		node n;
		cin >> n.have;
		v.push_back(n);
	}
	for (int i = 0; i < M; i++) {
		cin >> v[i].price;
		v[i].simpleprice = v[i].price / v[i].have;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].have <= N) {
			sum += v[i].price;
			N -= v[i].have;
		}
		else {
			sum += N * v[i].simpleprice;
			N = 0;
		}
		if (N == 0) {
			break;
		}
	}
	printf("%0.2f", sum);
	return 0;
}