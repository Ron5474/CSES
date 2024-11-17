#include <bits/stdc++.h>

using namespace std;

int main() {
    int max, local_max;
    string s;
    cin >> s;
    max = 1;
    local_max = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            local_max += 1;
            if (local_max > max)
                max = local_max;
        }
        else
            local_max = 1;
    }
    cout << max;
    cout << "\n";
}
