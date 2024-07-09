#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    deque<long long> a(n), b(m);
    vector<int> v;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    while (v.size() < n) {
        long long x = abs(b.back() - a.back());
        long long y = abs(b.front() - a.front());

        if (x > y) {
            v.push_back(x);
            b.pop_back();
            a.pop_back();
        } else {
            v.push_back(y);
            a.pop_front(); // Update the pointer for array 'a' in the else block
            b.pop_front(); // Update the pointer for array 'b' in the else block
        }
    }

    long long total_difference = 0;
    for (int i = 0; i < n; i++) {
        total_difference += v[i];
    }

    cout << total_difference << "\n";
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
