#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n,m,a;
    cin >> n;
    cin >> m;
    cin >> a;

    int count = 0;
    long long covered=0, area=(n*m), tile=(a*a);
    covered += tile;
    while ( covered<area && (area-covered)>= tile ) {
        count += 1;
        covered += tile;
    }
    if (count%4 != 0) {
        count += (count%4);
    }
    cout << count << endl;
    
    return 0;
}