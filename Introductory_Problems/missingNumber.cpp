#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, k;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    for (int i = 0 ; i < n - 1; i++) {
        cin >> k;
        sum -= k;
    }
    cout << sum;
    cout << "\n";
}
