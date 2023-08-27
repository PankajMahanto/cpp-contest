 #include <bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
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
    
    ll n,m,a,x,y;
    cin>>n>>m>>a;
    if(n%a==0)x=n/a;// bag sesh nah thakle eta 
    else x=n/a+1;// bag sesh thakle 1 add hobe tahole seta squre hobe
    if(m%a==0) y=m/a;
    else y=m/a+1;
   cout(x*y);
     
    
}

int main() {
      #ifndef ONLINE_JUDGE
        FILE;
    #endif
    FASTIO;
    solve();
    return 0;
}