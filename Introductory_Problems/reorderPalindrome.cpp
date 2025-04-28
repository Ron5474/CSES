#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    int len = s.length();
    char arr[len + 1];
    unordered_map<char, int> umap;
    int l = 0;
    int r = len - 1;
    
    arr[len] = '\0';

    for(int i = 0; i < len; i++) {
        auto it = umap.find(s[i]);
        if (it == umap.end()) {
            umap[s[i]] = 1;
        }
        else {
            // Remove element and place it at ends of array
            umap.erase(it);
            arr[l] = s[i];
            arr[r] = s[i];
            l += 1;
            r -= 1;
        }
    }
    auto it = umap.begin();
    if (len % 2 != 0) {
        arr[l] = it->first;
        umap.erase(it);
    }
    if (umap.begin() != umap.end())
        cout << "NO SOLUTION";
    else
        cout << arr;

    cout << "\n";
}
