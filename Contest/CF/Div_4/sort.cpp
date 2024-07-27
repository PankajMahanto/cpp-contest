#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        
        string a, b;
        cin >> a >> b;

        vector<int> results;

        while (q--) {
            int l, r;
            cin >> l >> r;
            --l; --r;  // Convert to 0-based indexing
            
            vector<int> count_a(26, 0);
            vector<int> count_b(26, 0);

            for (int i = l; i <= r; ++i) {
                count_a[a[i] - 'a']++;
                count_b[b[i] - 'a']++;
            }

            int operations = 0;
            for (int i = 0; i < 26; ++i) {
                if (count_a[i] > count_b[i]) {
                    operations += count_a[i] - count_b[i];
                }
            }

            results.push_back(operations);
        }

        for (int result : results) {
            cout << result << "\n";
        }
    }

    return 0;
}
