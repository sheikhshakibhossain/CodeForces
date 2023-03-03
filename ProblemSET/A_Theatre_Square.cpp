#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n,m,a;
    cin >> n;
    cin >> m;
    cin >> a;

    // long long covered=0, area=(n*m), tile=(a*a);
    
    // while ( covered < area && (area-covered) >= tile ) {
    //     count++;
    //     covered += tile;
    // }
    // if (count%4 != 0) {
    //     count += (count%4);
    // } // Doesn't work

    long long count = ceil(n/(double)a)*ceil(m/(double)a);
    cout << count << endl;
    
    return 0;
}