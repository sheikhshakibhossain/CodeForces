#include <bits/stdc++.h>

using namespace std;

int main() {

    string p;
    cin >> p;
    bool flag = false;
    for (int i=0; i<p.length(); i++) {
        if ( p.at(i)=='H' || p.at(i)=='Q' || p.at(i)=='9' ) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}