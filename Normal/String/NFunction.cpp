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
 #define out1(x) cout<<x<< " "
 #define nl cout<<"\n"
 #define read(x) ll x; cin>>x;
 #define vecin(i,a,v) rep(i,a){read(vx);v.pb(vx);}
 #define vecout(i,a,v) rep(i,a){cout1(v[i]);}
 #define gcd __gcd
 #define lcm(a,b) (a*b)/gcd(a,b)
const int M=1e7;
const ll N=1e7;
ll a[N],b[N],sum[N],cnt=0,ans=0;
char s[N],c[N];
 //=========OPERATORS=================================
//Problem name: clear()/insert()/push_back()/pop_back()/
//erase()/resize()/append()/compare()/substr()???
 //=========OPERATORS===================================

 //=========ITERATORS=================
 // begin()/end()/rbegin()/rend()/
 //===================================

 //===========Search===============
 //find()/rfind()/find_first_of()/find_last_of()/
 //============================================

 //===========Capacity===============
 //empty()/size()/length()/max_size()/
 //============================================
  void solve(){
     
      string s;
      cin>>s;
      out1(s.size());nl;
      
      int pos=max_element(s.begin(),s.end())-s.begin();
       cout<<*max_element(s.begin(),s.end());nl;
       cout<<"max_element_pos: "<<pos;nl;
      rep(i,s.size()){
        out1(s[i]);
      }
      nl;
     
      
  
  
  }
 
int main()
{
        FASTIO;
       read(t);
       rep1(i,t)
          solve();
  
     return 0;
}