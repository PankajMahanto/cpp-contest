#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

int digitSum(int num) {
    return (num - 1) % 9 + 1;
}

void solve() {
  
     int n;
        cin >> n;
      long long totalSum = 0;
      // vector<int> arr(n);

        // Calculate the sum of the numbers after replacement
        for (int i = 1; i <= n; ++i) {
            totalSum += digitSum(i);
        }

        cout << totalSum << "\n";
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
