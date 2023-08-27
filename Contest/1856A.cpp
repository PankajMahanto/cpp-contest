#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i, a) for (ll i = 0; i < a; i++)
#define rep1(i, a) for (ll i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){ll vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define nl cout<<"\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (ll)x.size()
#define pb push_back
#define ll long long int
#define vi vector<ll>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
const int N=1e5;
//Problem name: A. Tales of a Sort
void solve(){
  ll n,cnt=0;
  cin>>n;
  vi v(n),u(n);


  for(ll i=0;i<n;i++){
    cin>>v[i];
    u[i]=max(0LL,v[i]-1);
  }
  for(ll i=0;i<n;i++){
    cout<<u[i]<<" ";
  }nl;
  nl;
  sort(all(u));
  rep(i,n){
    if(u[i]>v[i])
    cnt++;
  }
  cout<<cnt<<" ";
  
  



//   sort(all(u));

//   for(ll i=0;i<n;i++){
//      if(u[i]<v[i]){
//          ++cnt;
//          break;
//      }
    
//   }
//    if(cnt==0)
//   cout<<0<<" ";
//   else
//   cout<<u[n-(cnt+2)/2]<<" ";
//   cout<<cnt; 
//   if(cnt==n)
//    cout<<0<<" ";
//    else if(cnt==0)
//    cout<<u[n-1]<<" ";
//    else
    // cout<<cnt<<" ";
}
//3 2 0 7 1 1 0
int main()
{
    
        FASTIO;
     ll tc;
    cin>>tc;
    while(tc--){
      solve();
    }

        // solve();
     return 0;
}