#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n, k;
    cin >> n >> k;

    long long odd_count = (n + 1) / 2;
    long long even_count = n / 2;

    if (k <= odd_count) {
        cout << (2 * k) - 1 << endl; // k-th odd number
    } else {
        cout << 2 * (k - odd_count) << endl; // k-th even number
    }

    return 0;
}



// long long numAtPos(long long first, long long pos) {
//     long long num = 0;
//     if (first == 1) { // odd
//         for (long long i=1, j=1; i<=pos; i++, j+=2) num = j;
//     } else {
//         for (long long i=1, j=2; i<=pos; i++, j+=2) num = j;
//     }
    
//     return num;
// }

// int main() {

//     // after re-arrange -> 1, 3, 5, 7, 9, 2, 4, 6, 8
//     // after re-arrange -> 1, 3, 5, 7, 9, 2, 4, 6, 8, 10
//     long long n, k;
//     cin >> n;
//     cin >> k;


//     if (n%2==0) { // even number of sequence
//         if ( k <= (n/2) ) {  // search in left/odd
//             cout << numAtPos(1, k) << endl;
//         }
//         else {
//             cout << numAtPos(2, k-(n/2)) << endl;
//         }
//     } 
//     else { // odd number of sequence
//         if ( k <= (n/2)+1 ) { 
//             cout << numAtPos(1, k) << endl;
//         } else {
//             cout << numAtPos(2, k-((n/2)+1)) << endl;
//         }
//     }
    
//     return 0;
// }