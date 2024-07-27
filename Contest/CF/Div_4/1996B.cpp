#include <bits/stdc++.h> // include all standard headers
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
// #define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

// Problem name:https://codeforces.com/contest/1996/problem/B

void solved()
{
    int n, k;
        cin >> n >> k;
        vector<vector<char>> grid(n, vector<char>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        int reducedSize = n / k;
        vector<vector<char>> reducedGrid(reducedSize, vector<char>(reducedSize));

        for (int i = 0; i < reducedSize; ++i) {
            for (int j = 0; j < reducedSize; ++j) {
                reducedGrid[i][j] = grid[i * k][j * k];
            }
        }

        for (int i = 0; i < reducedSize; ++i) {
            for (int j = 0; j < reducedSize; ++j) {
                cout << reducedGrid[i][j];
            }
            cout << "\n";
        }
}
int main()
{
    startTime = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc; // number of test cases
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solved();
    }

    return 0;
}