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

//pen and pencel

void solve(){
    ll a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;

    ll x=ceil((a+c-1)/c);
    ll y=ceil((b+d-1)/d);
    if((x+y)<=k){
        cout<<x<<" "<<y<<endl;
    }else cout(-1);
    
     
//    nl;
}

int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    // solve();
    return 0;
}