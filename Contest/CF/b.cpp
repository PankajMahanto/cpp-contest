#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long p = 0, m = 0;
    for (int i = 0; i < n; i++) {
        m = min(b, abs(v[i] - p) * a); // Calculate the charge consumed for the current message
        f -= m;
        

    }

    cout << "YES\n"; // If the loop completes, it means all messages can be sent
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
