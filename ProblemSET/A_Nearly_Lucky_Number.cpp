#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, count = 0; // ques said int, but it needs long long data type to store hidden inputs
    cin >> n;
    
    while (n > 0) {
        int digit = n%10;
        n /= 10;
        if (digit==4 || digit==7) count++;
    }

    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}