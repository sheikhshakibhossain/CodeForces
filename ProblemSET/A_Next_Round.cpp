#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, k, score=0;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        if (arr[i]>0 && arr[i]>=arr[k-1]) {
            score++;
        }
    }
    cout << score << endl;

    return 0;
}