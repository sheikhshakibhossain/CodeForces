#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, h, height, width=0;
    cin >> n;
    cin >> h;

    for (int i=0; i<n; i++) {
        cin >> height;
        if (height>h) {
            width += 2;
        } else {
            width++;
        }
    }
    cout << width << endl;

    return 0;
}