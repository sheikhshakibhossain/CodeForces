#include <bits/stdc++.h>

using namespace std;

int main() {

    long long a, b;
    int t, count;
    cin >> t;
    int arr[t];
    for (int i=0; i<t; i++) {
        count = 0;
        cin >> a;
        cin >> b;
        while (a%b != 0) {
            a++;
            count++;
        }
        arr[i] = count;
    }
    for (int i=0; i<t; i++) cout << arr[i] << endl;
    
    return 0;
}