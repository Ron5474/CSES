#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    if (sum % 2) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<long long> vec1;
    vector<long long> vec2;
    long long half_sum = sum / 2; 
    long long curr_sum = 0;
    for (long long i = n; i > 0; i--) {
        if ((curr_sum + i) <= half_sum) {
            curr_sum += i;
            vec1.push_back(i);
        }
        else {
            vec2.push_back(i);
        }
    }
    cout << vec1.size() << "\n";
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " "; 
    cout << "\n";

    cout << vec2.size() << "\n";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " "; 
    cout << "\n";
}
