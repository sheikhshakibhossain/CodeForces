#include <bits/stdc++.h>

using namespace std;

int main() {

    string str, out = "";
    cin >> str;

    char arr[str.length()];

    for (int i=0, k=0; i<str.length(); i++) {
        arr[i] = '?';
        str.at(i) = tolower(str.at(i));
        if (str.at(i)!='a' && str.at(i)!='e' && str.at(i)!='i' && str.at(i)!='o' && str.at(i)!='u' && str.at(i)!='y') {
            arr[k] = str.at(i);
            out = out + "." + arr[k];
            k++;
        }
    }

    cout << out << endl;
    
    return 0;
}