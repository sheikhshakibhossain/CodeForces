#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, input;
    double volume = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> input;
        volume += input/100.0;
    }
    volume /= n;
    volume *= 100;
    printf("%.12f\n", volume);
    
    return 0;
}