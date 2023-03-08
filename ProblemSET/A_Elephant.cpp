#include <bits/stdc++.h>

using namespace std;

int main() {

    int option[] = {1,2,3,4,5};

    int x, distance=0, k=4, step=0;
    cin >> x;

    while (distance < x) {
        if ( distance+option[k] <= x ) {
            distance += option[k];
            step++;
        } else {
            k--;
        }
    }
    cout << step << endl;
    
    return 0;
}