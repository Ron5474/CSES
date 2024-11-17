#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, c, p;
    cin >> n;
    long long moves = 0;
    for (int i = 0 ; i < n; i++) {
        cin >> c;
        if (i == 0) {
            p = c;
            continue;
        }
        if (p - c > 0) 
            moves += (p - c);
        if (c > p)
            p = c;
    }
    cout << moves;
    cout << "\n";
}
