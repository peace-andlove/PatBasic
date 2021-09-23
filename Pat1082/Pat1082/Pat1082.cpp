#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int id, x, y, index;
    int maxid, minid, maxindex, minindex;
    for (int i = 0; i < N; i++) {
        cin >> id >> x >> y;
        index = x * x + y * y;
        if (i == 0) {
            maxid = id;
            minid = id;
            maxindex = index;
            minindex = index;
        }
        else {
            if (index > maxindex) {
                maxid = id;
                maxindex = index;
            }
            if (index < minindex) {
                minid = id;
                minindex = index;
            }
        }
    }
    printf("%04d %04d", minid, maxid);
    return 0;
}