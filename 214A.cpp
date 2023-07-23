#include <bits/stdc++.h>
using namespace std;
//#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define pb push_back
#define vi vector<ll>
#define rep(i,a) for(ll i = 0; i < a; i++)
#define rep1(i,a) for(ll i = 1; i <= a; i++)
#define rep2(i,a,b) for(ll i = a; i <= b; i++)
#define rrep(i,a) for(ll i = a-1; i >= 0; i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (ll)x.size()
#define vecin(i,a,v) rep(i,a){ll vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans << "\n"
#define cout1(ans) cout << ans << " "
#define nl cout<<"\n"
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)

const int N=1e5;
void solve(){

    ll n,m,cnt=0;
    cin >> n>>m;
    rep(i,n){
        rep(j,m){
            if(n==1 && m==1)cnt=2;
            if((i*i+j==n) && (i+j*j==m)){
                cnt++;
            }

        }
    }
    cout(cnt);
  
}

int main() {
    
    // #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    // ll t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
    
    return 0;
}

