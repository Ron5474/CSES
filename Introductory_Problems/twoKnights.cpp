#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long k;
        k = (i * i  * (i * i - 1)) / 2;
        k -= (4 * (i - 1) * (i - 2));
        cout << k << "\n";
    }
}
