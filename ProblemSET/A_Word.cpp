#include <bits/stdc++.h>

using namespace std;

string str_lwr(string str) {
    for (int i=0; i<str.length(); i++) {
        str.at(i) = tolower(str.at(i));
    }
    return str;
}

string str_upr(string str) {
    for (int i=0; i<str.length(); i++) {
        str.at(i) = toupper(str.at(i));
    }
    return str;
}

int main() {
    
    string s;
    cin >> s;
    int upr=0, lwr=0;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            upr++;
        } else {
            lwr++;
        }
    }

    if (upr == lwr || lwr > upr) {
        s = str_lwr(s);
    } else {
        s = str_upr(s);
    }

    cout << s << endl;

    return 0;
}