#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    
    int arr[4] = {0,0,0,0};

    for (int i=0; i<s.length(); i++) {
        switch (s.at(i)) {
            case ('1'):
                arr[1]++;
                break;
            case ('2'):
                arr[2]++;
                break;
            case ('3'):
                arr[3]++;
                break;
        }
    }

    int lastIdx = arr[3]!=0 ? 3 : (arr[2]!=0 ? 2:1);
    for (int i=1; i<4; i++) {
        while (arr[i] != 0) {
            if (i!=lastIdx || arr[i] != 1) {
                cout << i << "+";
            } else {
                cout << i << endl;
            }
            arr[i]--;
        }
    }
    
    return 0;
}