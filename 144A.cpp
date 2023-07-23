#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
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
void solve(){
    ll n,cnt=0,ans=0;
     cin>>n;
  ll a[n];
  vi v;
  rep(i,n){
    cin>>a[i];
    v.pb(a[i]);
  }
  ll m=v[0],l=v[0],mindex,lindex;
  rep(i,n){
    if(m<v[i]){
      m=v[i];
      mindex=i;
    }  
   if(l>=v[i]){
      l=v[i];
      lindex=i;
   }
  }
    if(lindex<mindex){
    lindex=(n-1)-lindex;
    cnt=lindex+mindex-1;
  }else{
    lindex=(n-1)-lindex;
    cnt=lindex+mindex;
  }
  // co(m);
  // co(l);
  // nl;
  // co(mindex);
  // co(lindex);
  // nl;
  co(cnt);
 

  // sort(rall(v));
  // rep(i,n) cout(v[i]);
// int numSteps = distance(v.begin(),is_sorted_until(v.end(), v.begin(),greater<int>()));

    // std::cout<< numSteps << std::endl;

  
}

int main() {
      #ifndef ONLINE_JUDGE
        FILE;
    #endif
    FASTIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
   // solve();
    return 0;
}