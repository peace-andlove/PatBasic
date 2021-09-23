#include<iostream>
#include<cmath>
using namespace std;
int nums[100001];
int main() {
    int N, n;
    cin >> N;
    for (int i = 1; i < N + 1; i++) {
        cin >> n;
        nums[abs(n - i)]++;
    }
    for (int i = N; i >= 0; i--) {
        if (nums[i] > 1) {
            cout << i << " " << nums[i] << endl;
        }
    }
    return 0;
}