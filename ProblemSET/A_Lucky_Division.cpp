#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int lucky[] = {4, 7, 44, 47, 77, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    int size = sizeof(lucky)/sizeof(lucky[0]);

    for (int i=0; i<size; i++) {
        if ( n%lucky[i]==0 ) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;

    // Doesn't pass all testcases
    // int n; 
    // cin >> n;
    // int num = n;
    // bool lucky = true;
    
    // while (n > 0) {
    //     int digit = n%10;
    //     n /= 10;
    //     if (digit != 4 && digit != 7) lucky=false;
    // }

    // if ( lucky || (num%4==0) || (num%7==0) ) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }
    // return 0;
}