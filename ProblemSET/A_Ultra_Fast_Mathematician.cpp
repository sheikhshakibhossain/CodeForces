#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s1, s2;
    cin >> s1;
    cin >> s2;
    char s3[s1.length()+1]; 
    /*
        s1 = 1010           -- > 4
        s2 = 1100           -- > 4
        s3 = 0110 and \0    -- > 5
    */
    for (int i=0; i<s1.length(); i++) {
        if ( s1.at(i) != s2.at(i) )  s3[i] = '1';
        else s3[i] = '0';
    }

    s3[s1.length()] = '\0';
    cout << s3 << endl;

    return 0;
}