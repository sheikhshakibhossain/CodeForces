#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string str;
    cin >> str;

    set<char> distinctChar;
    for (char c : str) {
        distinctChar.insert(c);
    }

    int count = distinctChar.size();
    if (count%2!=0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}