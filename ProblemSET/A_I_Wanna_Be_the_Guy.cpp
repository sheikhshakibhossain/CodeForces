#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p, q, in;
    set<int> set1, set2;

    cin >> n;
    for (int i=1; i<=n; i++) set1.insert(i);

    cin >> p;
    for (int i=0; i<p; i++) {
        cin >> in;
        set2.insert(in);
    }

    cin >> q;
    for (int i=0; i<q; i++) {
        cin >> in;
        set2.insert(in);
    }

    if (set1 != set2) {
        cout << "Oh, my keyboard!" << endl;
    } else {
        cout << "I become the guy." << endl;
    }
    

    return 0;
}