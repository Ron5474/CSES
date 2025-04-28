#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, a, b;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        cin >> a >> b;
        if ((a > 2 * b) || (b > 2 * a) || ((a + b) % 3 != 0))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    cout << "\n";
}
