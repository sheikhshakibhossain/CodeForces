#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k;
    cin >> n;
    cin >> k;
    for (int i=0; i<k; i++) {
        if (n%10 != 0) n-=1;
        else if (n%10 == 0) n=n/10;
    }
    cout << n << endl;
    
    return 0;
}