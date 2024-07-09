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

// Problem name:

void solved()
{

    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> list(n * n);

    for (int i = 0; i < (n * n); i++)
        cin >> list[i];
    ll a = *min_element(list.begin(), list.end());
    unordered_map<ll,ll> st;
    
    for(auto x: list) st[x]++;

    vector<vector<ll>> sq(n, vector<ll>(n, 0));
    sq[0][0] = a;

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            sq[i][0] = sq[i - 1][0] + c;
        for (int j = 0; j < n; j++)
        {
            if (j != 0)
                sq[i][j] = sq[i][j - 1] + d;
        }
    }
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {   
            int temp=sq[i][j];
            if (st.find(temp)==st.end())
            {
                cout<<"No\n";
                return;
            }
            else{
                st[temp]--;
                if(st[temp]==0)
                    st.erase(temp);
            }
                
        }
    }
    cout<<"Yes\n";



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