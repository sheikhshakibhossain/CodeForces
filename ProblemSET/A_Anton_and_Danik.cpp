#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, anton=0, danik=0;
    cin >> n;
    string s;
    cin >> s;

    for (int i=0; i<n; i++) {
        if (s.at(i)=='A') {
            anton++;
        } else {
            danik++;
        }
    }

    if (anton==danik) {
        cout << "Friendship" << endl;
    } else if (anton>danik) {
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }
    
    return 0;
}