#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define lli long long int
#define ld long double
#define pii pair<int, int>
//#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
   
// const int INF = 1e9;
// const ll INFLL = 1e18;
// const int MOD = 1e9 + 7;
    
//Problem name: 
const int mx=2e5+121;
ll arr[mx],sum[mx];
 
  void solved(){
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
     
    for(int i=1;i<=n;i++){
       sum[i]=sum[i-1]+arr[i];
    } 

   for(int i=0;i<=n;i++)cout<<sum[i]<<" ";cout<<"\n";
      while(q--){
            ll l,r;
            cin>>l>>r;
            cout<<(sum[r]-sum[l-1])<<"\n";
      }
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
 
  
      int tc=1;  // number of test cases
      // cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}