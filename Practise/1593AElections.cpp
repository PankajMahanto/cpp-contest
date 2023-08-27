#include <bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a) for(long long int i = 0; i < a; i++)
#define rep1(i,a) for(long long int i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){long long int vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans << "\n"
#define cout1(ans) cout << ans << " "
#define nl cout<<"\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (long long int)x.size()
#define pb push_back
#define ll long long int
#define vi vector<long long int>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)

const int N=1e5;
void solve(){
    ll n,cnt=0,ans=0;
        ll a,b,c;
    cin>>n;
    rep(i,n){
     cin>>a>>b>>c;
     cout<<max(0LL,max(b,c)+1-a)<<" "<<max(0LL,max(a,c)+1-b)<<" "<<max(0LL,max(a,b)+1-c)<<endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        FILE;
    #endif
    FASTIO;
    // ll t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}
/*
input
5
0 0 0
10 75 15
13 13 17
1000 0 0
0 1000000000 0
output
1 1 1
66 0 61
5 5 0
0 1001 1001
1000000001 0 1000000001
*/
