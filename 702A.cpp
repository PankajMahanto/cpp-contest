 #include <bits/stdc++.h>
using namespace std;
//#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a) for(long long int i = 0; i < a; i++)
#define rep1(i,a) for(long long i = 1; i <=a; i++)
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
    ll n,cnt=1,ans=1;
    cin>>n;
    vi v;
    rep(i,n){
        ll vx; cin>>vx;
        v.pb(vx);
    }
    rep1(i,n-1){
     if(v[i]>v[i-1]){
         cnt++;
       } else{
        if(cnt>ans) 
        ans=cnt;
        cnt=1;
       }  
      
    if(cnt>ans)
    ans=cnt; 
   
    }
    cout(ans);
}

int main() {
//FILE;
    FASTIO;
    // ll t; cin>>t;
    // while(t--){
    //       solve();
    // }
    
   solve();
  
    return 0;
}