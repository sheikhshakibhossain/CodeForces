#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s, msg="hello";
    cin >> s;
    int count=0;

    for (int i=0, k=0; i<s.length(); i++) { 
        if (s[i]==msg[k]) {
            k++;
            count++;
        }
    } 
    
    if (count == 5) { // h e l l o --> 5 characters
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}