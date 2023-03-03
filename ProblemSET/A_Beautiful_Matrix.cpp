#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[5][5];
    int row=-1, col=-1, count=0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];
            if (arr[i][j]==1) {
                row = i;
                col = j;
            }
        }
    }

    if (col < 2) {
        count = (col == 0) ? count+2 : count+1;
    } else if (col > 2) {
        count = (col == 4) ? count+2 : count+1;
    }

    if (row < 2) {
        count = (row == 0) ? count+2 : count+1;
    } else if (row > 2) {
        count = (row == 4) ? count+2 : count+1;
    }
    cout << count << endl;

    // count = abs(2-row) + abs(2-col); // absolute value
    // cout << count << endl; 

    return 0;
}