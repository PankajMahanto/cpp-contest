#include <bits/stdc++.h>
using namespace std;
 #define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
 #define ll long long int
 #define ff first
 #define ss second
 #define pb push_back
 #define vi vector<ll>
 #define vs vector<string>
 #define pii pair<ll, ll>
 #define vp vector<pii>
 #define rep(i,a) for(ll i = 0; i < a; i++)
 #define rep1(i,a) for(ll i = 1; i <= a; i++)
 #define rep2(i,a,b) for(ll i = a; i <= b; i++)
 #define rrep(i,a) for(ll i = a-1; i >= 0; i--)
 #define all(v) v.begin(),v.end()
 #define rall(v) v.rbegin(),v.rend()
 #define toupper(s) transform(all(s), s.begin(), ::toupper)
 #define tolower(s) transform(all(s), s.begin(), ::tolower)
 #define unq(x) x.erase(unique(all(x)),x.end())
 #define sz(x) (ll)x.size()
 #define yes cout << YESn
 #define no cout << NOn
 #define out(x) cout<<x<<"\n"
 #define out1(x) cout<<x<<"  " 
 #define nl "\n"
 #define read(x) ll x; cin>>x;
 #define vecin(i,a,v) rep(i,a){read(vx);v.pb(vx);}
 #define vecout(i,a,v) rep(i,a){cout1(v[i]);}
 #define gcd __gcd
 #define lcm(a,b) (a*b)/gcd(a,b)
const int M=1e7;
const ll N=1e7;

 
//Problem name: 
 
  void solve(){
      ll n,ans=0,k1,k2;

      cin>>n;
      k1=(n*(n-1))/2;
      vector<int>a(k1);
      rep(i,k1){
        cin>>a[i];  
      }
      sort(a.begin(),a.begin()+k1);
    
      int m=n;
      k2=0;
      while(k2<k1){
          cout<<a[k2]<<" ";
           m--,k2+=m;
                  
      }
       cout<<a[k1-1];
      
      cout<<"\n";
   


  }
 
int main()
{
        FASTIO;
       read(t);
       rep1(i,t)
          solve();
  
     return 0;
}