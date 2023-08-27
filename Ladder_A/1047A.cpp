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
//Problem name: A Little C Loves 3 I
void solve(){
  ll n;
  cin>>n;

  if((n-2)%3==0)
  cout<<1<<" "<<2<<" "<<n-3;  
 else  
    cout<<1<<" "<<1<<" "<<n-2;
}

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2023-08-04 (22:16)
 * 
 * @returns int
 */

int main()
{
     
        FASTIO;
        solve();
     return 0;
}