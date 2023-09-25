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
   
const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
    
//Problem name: 
 const int mx=2e5+121;
 ll arr[mx],minElement[mx];
  void solved(){
 
       ll n,q;
       cin>>n>>q;
       vector<ll>v(n);
       for(auto &i: v)cin>>i;
      //   ll sum=arr[1];
      //  for(int i=1;i<=n;i++){
      //       minElement[i]=min(sum,arr[i]);
      //  }

      //   for(int i=0;i<=n;i++)cout<<minElement[i]<<" ";cout<<"\n";

        while(q--){
            ll a,b;
            cin>>a>>b;
            // ll sum=INT_MAX;
            // for(int i=a;i<=b;i++){
            //   sum=min(sum,arr[i]);
            // }
            // cout<<sum<<"\n";
            int m= *min_element(v.begin()+a,v.begin()+b);
            cout<<m<<"\n";
        }
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
      //     cin.tie(NULL);cout.tie(NULL);
 
  
      int tc=1;  // number of test cases
      // cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}