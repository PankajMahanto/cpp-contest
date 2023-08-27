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

//Game

void solve(){
  //  ll n,m;
    string s;
   cin>>s;
   ll n=s.size();
   vi v;
   rep(i,n){
    cout<<s[i]<<" :"<<s[i]-'0'<<endl;
      // v.pb(s[i]-'0');
   }
   nl;
   // 11010

  //  ll f[26]={0};
  //  for(auto i: s){
  //      f[i-'A']++;
  //      //cout(f[i-'A']);
  //      cout<<i<<" "<<f[i-'A']<<" "<<endl;
  //  }
  //  nl;
  //  ll ans=f[0];
  //  cout(ans);
  //  for(ll i=0;i<m;i++){
  //     ans=min(ans,f[i]);
  //    cout<<"ans:"<<ans<<" "<<"f[i]:"<<f[i];
  //  }
  //  nl;
  //  cout1(ans*m);
  // nl;
  
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