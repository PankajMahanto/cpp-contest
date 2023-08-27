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
#define in int
#define vi vector<int>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
const int N=1e5;

void solve(){
    ll n;
    cin>>n;
    ll r=0;
    for(ll i=1;i<n;i++){
        if(n%i==0)
        r++;
    }
    cout(r);

 
 
//    nl;
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