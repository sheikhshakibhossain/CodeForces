#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    int result[8];
    cin >> a;
    cin >> b;
    cin >> c;
    
    result[0] = a + b + c;
    result[1] = a * b + c;
    result[2] = a + b * c;
    result[3] = a * b * c;
    result[4] = (a + b) * c;
    result[5] = (a * b) + c;
    result[6] = a + (b * c);
    result[7] = a * (b + c);

    int max = result[0];
    for (int i=1; i<8; i++) {
        if (result[i] > max) max = result[i];
    }
    cout << max << endl;
    
    return 0;
}