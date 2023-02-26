#include <bits/stdc++.h>

using namespace std;

int main() {

    string s, t;
    cin >> s;
    cin >> t;

    bool flag = true;

    for (int i=s.length()-1, k=0; i>=0; i--, k++) {
        if (s.at(i)!=t.at(k)) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}