#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    string start="I ", odd="hate ", even="love ", mid="that ", last="it", output="";
    for (int i=1; i<=n; i++) {
        output += start;
        if (i%2==0) {
            output += even;
        } else {
            output += odd;
        }
        if (i!=n) {
            output += mid;
        } else {
            output += last;
        }
    }
    cout << output << endl;

    return 0;
}