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
#define yes cout << YES

#define no cout << NO

#define cout(ans) cout << ans << 

#define cout1(ans) cout << ans <<" " 
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
//Problem name:A. Find Square
void solve(){
   ll n,m; 
   cin>>n>>m;
   vector<vector<char>>s(n,vector<char>(m));//n is row and m is colum
   //input value
   rep(i,n){
      rep(j,m){
         cin>>s[i][j];
      }
   }
   // ll a=0,b=0,c=0,d=0;
   ll a=N,b=N,c=-N,d=-N;
  rep(i,n){
   rep(j,m){
      if(s[i][j]=='B'){
         a=min(a,i);
         b=min(b,j);
         c=max(c,i);
         d=max(d,j);
      }
   }
  }
  cout<<(a+c)/2+1<<" "<<(b+d)/2+1;nl;

   
}

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2023-08-04 (16:02)
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
     // int tc;
    // cin>>tc;
    // while(tc--){
  //     solve();
    // }
//for(ll t=1;t<=tc;t++){solve()}
        solve();
     return 0;
}