#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    // NOT OK
    int n, max= -9999, maxIdx = -1, min = 9999, minIdx = -1, count = 0;
    cin >> n;
    int line[n];
    for (int i=0; i<n; i++) {
        cin >> line[i];
        if (line[i] >= max) {
            max = line[i];
            maxIdx = i;
        }
        if (line[i] <= min) {
            min = line[i];
            minIdx = i;
        }
    }
    for (int i=maxIdx; i>0; i--) {
        swap(&line[i], &line[i-1]);
        count++;
        if (line[i] <= min) {
            min = line[i];
            minIdx = i;
        }
    }
    for (int i=minIdx; i<n-1; i++) {
        swap(&line[i], &line[i+1]);
        count++;
    }
    cout << count << endl;
    
    return 0;
}