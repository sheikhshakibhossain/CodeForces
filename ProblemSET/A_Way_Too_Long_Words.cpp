#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    string words[n];

    for (int i=0; i<n; i++) {
        cin >> words[i];
        if (words[i].length() > 10) {
            words[i] = words[i].at(0) + to_string(words[i].length()-2) + words[i].at(words[i].length()-1);
        }
    }

    for (int i=0; i<n; i++) {
        cout << words[i] << endl;
    }
    
    return 0;
}