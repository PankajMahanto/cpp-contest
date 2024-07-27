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

// Problem name:https://codeforces.com/contest/1996/problem/D

void solved()
{   
    ll n,x;
    cin>>n>>x;
    
    ll count=0;

    for (int a = 1; a <= x; ++a) {
            
            for (int b = 1; b <= x; ++b) {
                
                ll max_c_sum = x - a - b;
                if (max_c_sum < 1) break;  

                if (a * b >= n) break;
                ll max_c_prod = (n - a * b) / (a + b);

    
                ll max_c = min(max_c_sum, max_c_prod);

                if (max_c >= 1) {
                    count += max_c;   
                }
            }
        }

        cout << count << "\n";
}
int main()
{
    startTime = clock();
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);cout.tie(NULL);

    int tc; // number of test cases
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solved();
    }

    return 0;
}