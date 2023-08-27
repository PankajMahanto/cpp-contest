#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)

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
const int N=1e5;
//Problem name: A. Keanu Reeves
void solve(){
     ll n,cnt=0,ans=0;
     cin>>n;
     string s;
     cin>>s;
     for(ll i=0;i<n;i++){
       if(s[i]=='1')
        cnt++;
        else ans++;
     }
     if(cnt==ans){
        cout<<2;nl;
        cout<<s.substr(0,n-1)<<" "<<s[n-1];       
        // cout<<s.substr(0,n-2)<<" "<<s.substr(n-3);       
     }
     else{
        cout<<1;nl;
        cout<<s;
     }
}



int main()
{
  
        FASTIO;
        solve();
     return 0;
}