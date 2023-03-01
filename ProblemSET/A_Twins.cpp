#include <bits/stdc++.h>

using namespace std;

void insertionSort(int *arr, int n) {
    for (int i=1; i<n; i++) {
        int key = arr[i], j=i-1;

        while(key < arr[j] && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {

    int n, total=0, sum=0;
    cin >> n;
    int coin[n];
    for (int i=0; i<n; i++) {
        cin >> coin[i];
        total += coin[i];
    }
    total /= 2;
    
    insertionSort(coin, n);
    int count = 0;
    int i = n-1;
    while (sum <= total) {
        sum += coin[i];
        count++;
        i--;
    }
    cout << count << endl;
    return 0;
    
}