#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    string str = to_string(m * n);
    reverse(str.begin(), str.end());
    str = to_string(stoi(str));
    cout << str;
}