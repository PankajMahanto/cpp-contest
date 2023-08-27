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

int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    ll tc;
    cin>>tc;
    for(ll i=1;i<=tc;i++){
      ll n,m;
      cin>>n>>m;
      bool but=1;
      map<pair<ll,ll>,bool>mp;
      rep(i,m){
        ll a,b;
        cin>>a>>b;
        if(mp[{a,b}])
            but=0;
        
        mp[{a,b}]=1;
      }
      if(but) cout<<"Scenario #"<<i<<": possible"<<endl;
     else cout<<"Scenario #"<<i<<": impossible"<<endl;


    }
    //solve();
    return 0;
}