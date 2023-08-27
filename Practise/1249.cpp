 #include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a) for(ll i = 0; i < a; i++)
#define rep1(i,a) for(ll i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){ll vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define co(ans) cout << ans << "\n"
#define co1(ans) cout << ans << " "
#define nl cout<<"\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (ll)x.size()
#define pb push_back
#define vi vector<ll>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
const int N=1e5;
//A. yet another dividing into teams
void solve(){
    ll n,cnt=0,ans=0;
    vi v;
    cin>>n;
    ll a[n];
    rep(i,n){
       cin>>a[i];
       v.pb(a[i]);
    }
    sort(all(v));
    rep(i,n){
        ll check=abs(v[i]-v[i-1]);
       if((check<=1))
       ans++;
   
    }
    if(ans>0)
    co(2);
    else co(1);
}


int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
   // solve();
    return 0;
}