#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string str;
    cin >> str;
    bool flag = false;

    for (int i=0; i<str.length(); i++) {
        int count = 0, k=i;
        while ( k < str.length() && str.at(i) == str.at(k) ) {
            count++;
            k++;
        }
        if (count >= 7){
            flag = true;
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