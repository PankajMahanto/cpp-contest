#include <bits/stdc++.h>
using namespace std;
 #define FASTIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
 #define ll long long int
//  #define ff first
//  #define ss second
//  #define pb push_back
//  #define vi vector<ll>
//  #define vs vector<string>
//  #define pii pair<ll, ll>
//  #define vp vector<pii>
 #define rep(i,a) for(ll i = 0; i < a; i++)
 #define rep1(i,a) for(ll i = 1; i <= a; i++)
//  #define rep2(i,a,b) for(ll i = a; i <= b; i++)
//  #define rrep(i,a) for(ll i = a-1; i >= 0; i--)
//  #define all(v) v.begin(),v.end()
//  #define rall(v) v.rbegin(),v.rend()
//  #define toupper(s) transform(all(s), s.begin(), ::toupper)
//  #define tolower(s) transform(all(s), s.begin(), ::tolower)
//  #define unq(x) x.erase(unique(all(x)),x.end())
//  #define sz(x) (ll)x.size()
//  #define yes cout << YESn
//  #define no cout << NOn
 #define out(x) cout<<x<<"\n"
 #define out1(x) cout<<x<<" " 
//  #define nl cout<<"\n"
 #define read(x) ll x; cin>>x;
//  #define vecin(i,a,v) rep(i,a){read(vx);v.pb(vx);}
//  #define vecout(i,a,v) rep(i,a){cout1(v[i]);}
//  #define gcd __gcd
//  #define lcm(a,b) (a*b)/gcd(a,b)
// const int M=1e7;
// const ll N=1e7;
// ll a[N],b[N],sum[N],cnt=0,ans=0;
// char c[N],B[N],s[N];
 
//Problem name: A. A Prank
   int arr[105];
  void solve(){
      int n,cnt=0,ans=0;
      
        cin>>n;
      // rep1(i,n){
      //   cin>>arr[i];
      //   // scanf("%d",arr+i);
      // }
      for(int i=1;i<=n;i++) cin>>arr[i];
     
      arr[n+1]=1001;
      // rep1(i,n){
      //   out1(arr[i]);
      // }
      // out1("\n");
      // This compare at a time 3 digit O(nlogn)
        for(int i=1;i<=n;i++){
             (arr[i-1]+1==arr[i] && arr[i]+1==arr[i+1])? ans++:ans=0,cnt>ans?:cnt=ans;
        }
      // cout<<"\n";
      out1(cnt);
     // this is O(n^2) time
    //  for(int i=0;i<=n;i++)
    //     for(int j=i;j<=n;j++)
    //         if(arr[j]-arr[i]==j-i)
    //            ans=max(ans,j-i-1);  
                       
    // out1(ans);
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