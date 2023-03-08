#include <bits/stdc++.h>

using namespace std;

int main() {

    /*
        k   dollars value of i'th banana i.k dollar
        n   dollars he has
        w   no. of bananas
    */
    int w, k, n, total=0; 
    cin >> k;
    cin >> n;
    cin >> w;

    for (int i=1; i<=w; i++) {
        total += (i*k);
    }
    total = (n > total)  ?  0 : (total-n);
    cout << total << endl;

    return 0;
}