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
#define yes cout <<"YES\n"

#define no cout <<"NO\n"

#define cout(ans) cout << ans << "\n"

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
//Problem name:Rounded 898A
void solve(){
    ll n;
    cin>>n;
    ll a=n%10;
    if(a>4)
    cout(n-a+10);
    else cout(n-a);
//    ll a=n/10*10;
//    ll b=a+10;
//    if(n-a>b-n)
//    cout(b);
//    else cout(a);
    
}

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2023-08-04 (12:44)
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