 #include <bits/stdc++.h>
using namespace std;
#define FILE freopen("fafa.txt", "r", stdin);freopen("fafaout.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a) for(int i = 0; i < a; i++)
#define rep1(i,a) for(int i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){int vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans << "\n"
#define cout1(ans) cout << ans << " "
#define nl cout<<"\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (int)x.size()
#define pb push_back
#define ll long long int
#define l long long
#define d double

#define vi vector<int>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)

const int N=1e5;

//Choice Two numbers

void solve(){
   ll n,m;
   cin>>n;
   vi v,u;
   rep(i,n){
    ll a;
    cin>>a;
    v.pb(a);
   }
   cin>>m;
   rep(i,m){
    ll a;
    cin>>a;
    u.pb(a);
   }
   sort(all(v));
   sort(all(u));
//    for(auto i: v){
//     cout1(i);
//    }nl;
//    for(auto i: u){
//     cout1(i);
//    }
//    nl;
   cout1(v[n-1]);cout1(u[m-1]);
   nl;
}

int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    solve();
    return 0;
}