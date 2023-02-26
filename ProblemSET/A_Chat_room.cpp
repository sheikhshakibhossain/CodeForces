#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    bool flag = false;
    char letter[] = {'h', 'e', 'l', 'o'};
    int k=0, count=0;

    set<char> sack;

    for (int i=0; i<s.length(); i++) { // h e l h c l u d o o
        if ( sack.count(s.at(i)) ) {
            sack.count(s.at(i))
            i++;
        }
        while (s.at(i)==letter[k]) {
            i++;
            flag = true;
            sack.insert(s.at(i));
        }
        if (flag) {
            k++;
            count++;
        }
    }

    if (count == 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}