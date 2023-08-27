#include <bits/stdc++.h>
using namespace std;
// #define FILE freopen(input.txt,r, stdin);freopen(output.txt,w, stdout)
// text file, r, w, er double cotation dite hobe nah hole  
//kaj korbe nah file input and output
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i, a) for (ll i = 0; i < a; i++)
#define rep1(i, a) for (ll i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){ll vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define nl cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (ll)x.size()
#define pb push_back
#define ll long long int
#define vi vector<ll>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
const int N=1e7;
//Problem name: 
void solve(){
  ll n,cnt=0;
  cin>>n;
  map<int,int>mp;
  rep(i,n){
    int a;
    cin>>a;
    mp[a]++;
  }
  for(auto i: mp){
    ll v=i.second;
    if(n==1){
         no; break;
    }   
    else if(v>=2){
       no; break;
    }
       else{
        yes;break;
       } 
  }
//   nl;
//   for(auto i: mp){
//     cout<<i.first<<" "<<i.second;
//   }
// nl;
//   vi v(n),u(n);
//   for(ll i=0;i<n;i++){
//     cin>>v[i];
//     u[i]=v[i];
//   }
//   sort(all(u));
//   for(ll i=0;i<n;i++){
//     cout<<u[i]<<" ";
//   }
//   nl;
//   for(ll i=0;i<n;i++){
//     if(u[i]==v[i])
//     cnt++;
//   }
//   if(cnt)
//   no;
//   else yes;


}

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2023-08-05 (21:35)
 * 
 * @returns int
 */

int main()
{
     // Let's start here
                 
                  
 //   #ifndef ONLINE_JUDGE
     // FILE;
     // #endif
        FASTIO;
     int tc;
    cin>>tc;
    while(tc--){
      solve();
    }
//for(ll t=1;t<=tc;t++){solve()}
        // solve();
     return 0;
}