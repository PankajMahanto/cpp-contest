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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans <<"\n"
#define cout1(ans) cout << ans << " "
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
//Problem name:Eleven
ll a[N];
void solve(){
     ll n;
     cin>>n;
     string s="";
     rep1(i,n){
      s+="o";
     }
    //  cout<<s;
    //  nl;
      // a[1]=1;
      // a[2]=2;
      // for(ll i=3;i<=n;i++){
      //   a[i]=a[i-2]+a[i-1];
      // }
    
    ll x=1,y=1;
    while(y<=n){
       s[y-1]='O';
       ll t=y;
       y=x+y;
       x=t;
    }
    cout<<s;nl;

    //   sort(a,a+n);
    //   for(int i=1;i<=n;i++){
    //     cout<<a[i]<<" ";
    //   }
    //   nl;
    
    //  for(ll i=1;i<=n;i++){      
    //      if(i-2+i-1)
    //         cout<<"O"; 
    //       else cout<<"o";
    //  }
}//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// 1 2 3   5     8            13      

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2023-08-04 (14:18)
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