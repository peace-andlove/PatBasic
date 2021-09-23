#include<iostream>
#include<string>
using namespace std;
int main() {
    int N;
    string password;
    cin >> N;
    cin.get();
    bool f, g, k;
    for (int i = 0; i < N; i++) {
        getline(cin, password);
        f = false;
        g = false;
        k = true;
        if (password.size() < 6) {
            cout << "Your password is tai duan le." << endl;
        }
        else {
            for (int i = 0; i < password.size(); i++) {
                if (password[i] == '.') {

                }
                else if ((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z')) {
                    f = true;
                }
                else if (password[i] >= '0' && password[i] <= '9') {
                    g = true;
                }
                else {
                    cout << "Your password is tai luan le." << endl;
                    k = false;
                    break;
                }
            }
            if (k) {
                if (f && !g) {
                    cout << "Your password needs shu zi." << endl;
                }
                else if (!f && g) {
                    cout << "Your password needs zi mu." << endl;
                }
                else if (f && g) {
                    cout << "Your password is wan mei." << endl;
                }
            }

        }
    }
    return 0;
}