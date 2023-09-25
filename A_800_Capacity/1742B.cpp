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
 
  void solved(){
 
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto &i: v)cin>>i;
      //  for(auto &i: v)cout<<i<<" ";cout<<"\n";
       sort(v.begin(),v.end());
       
      //  for(auto &i: v)cout<<i<<" ";cout<<"\n";
       bool ok=1;
      //   if(n==1){
      //       cout<<"YES\n";return;
      //   }
      //   int cnt=0;
       for(int i=1;i<n;i++){
            if(v[i-1]==v[i])
             {
                  ok=0;
                  // cnt++;
                  break;
             }
       }
       cout<<(ok?"YES":"NO")<<"\n";
      //  cout<<(ok?"YES":"NO")<<" "<<cnt<<"\n";
      //  cout<<cnt<<"\n";
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
          //cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}