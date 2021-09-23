#include<iostream>
#include<string>
using namespace std;
string str[81];
int main() {
    int count = 0;
    while (true) {
        cin >> str[count++];
        if (cin.get() == '\n') {
            break;
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        if (i != count - 1) {
            cout << " ";
        }
        cout << str[i];
    }
    return 0;
}