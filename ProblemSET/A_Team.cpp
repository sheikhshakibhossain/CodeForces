#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, vote=0, point=0, in;
    cin >> n;
    for (int i=0; i<n; i++) {
        point=0;
        for (int j=0; j<3; j++) {
            cin >> in;
            if (in == 1) {
                point++;
            }
        }
        if (point >= 2) {
            vote++;
        }
    }
    cout << vote << endl;    
    return 0;
}