#include <bits/stdc++.h>

using namespace std;

int main() {

    string s1, s2;
    cin >> s1;
    cin >> s2;

    int status = 0;

    for (int i=0; i<s1.length(); i++) {
        s1.at(i) = toupper(s1.at(i));
        s2.at(i) = toupper(s2.at(i));
    }

    if (s1 == s2) {
        status = 0;
    } else if (s1 < s2) {
        status = -1;
    } else if (s2 < s1) {
        status = 1;
    }
    cout << status << endl;
    
    return 0;
}