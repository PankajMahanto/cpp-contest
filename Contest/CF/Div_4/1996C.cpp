#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define eprintf(...)                  \
    {                                 \
        fprintf(stderr, __VA_ARGS__); \
        fflush(stderr);               \
    }
#else
#define eprintf(...) 42
#endif

#define ll long long
#define lli long long int
#define ld long double
#define pii pair<int, int>

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
// Problem name:https://codeforces.com/contest/1996/problem/C
void solved()
{
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefix_b(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            prefix_a[i + 1][j] = prefix_a[i][j];
            prefix_b[i + 1][j] = prefix_b[i][j];
        }
        prefix_a[i + 1][a[i] - 'a']++;
        prefix_b[i + 1][b[i] - 'a']++;
    }

    vector<int> results;

    while (q--) {
        int l, r;
        cin >> l >> r;
        --l; --r;

        vector<int> count_a(26, 0);
        vector<int> count_b(26, 0);

        for (int i = 0; i < 26; ++i) {
            count_a[i] = prefix_a[r + 1][i] - prefix_a[l][i];
            count_b[i] = prefix_b[r + 1][i] - prefix_b[l][i];
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

int main()
{
    startTime = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solved();
    }

    return 0;
}
