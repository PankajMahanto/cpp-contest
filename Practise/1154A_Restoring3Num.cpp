#include <bits/stdc++.h>
using namespace std;
// #define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, a) for (ll i = 0; i < a; i++)
#define rep1(i, a) for (ll i = 1; i <= a; i++)
#define vecin(i, a, v)  rep(i, a){ll vx;cin >> vx;v.pb(vx);}
#define vecin1(i, a, v) rep1(i, a){ll vx;cin >> vx;v.pb(vx);}
#define vecout(i, a, v) rep(i, a) { cout1(v[i]); }
#define vecout1(i, a, v)  rep1(i, a) { cout1(v[i]); }
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans << "\n"
#define cout1(ans) cout << ans << " "
#define nl cout<<"\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (ll) x.size()
#define pb push_back
#define ll long long int
#define in int
#define vi vector<ll>
#define gcd __gcd
#define lcm(a, b) (a * b) / gcd(a, b)
const int N = 1e5;
void solve()
{

    ll n,cnt = 0,sum=0;
    ll a[4];
    vi v;
    vecin(i,4,v);
     sort(all(v));
     cout1(v[3]-v[0]);
     cout1(v[3]-v[1]);
     cout1(v[3]-v[2]);
    nl;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     FILE;
// #endif
    FASTIO;
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
   solve();
    return 0;
}