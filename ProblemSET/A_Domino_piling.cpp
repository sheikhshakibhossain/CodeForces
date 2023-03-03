#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    cin >> m;
    cin >> n;
    int area = m*n;
    int covered = 0;
    int count = 0;
    while (covered<area && (area-covered) >= 2) {
        count++;
        covered += 2;
    }
    cout << count << endl;
    
    return 0;
}