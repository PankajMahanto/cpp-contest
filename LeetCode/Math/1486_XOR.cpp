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
 int xorOperation(int n,int start){
      vector<int>v(n);
      int value=start;
      for(int i=0;i<n;i++){
            v[i]=start+2*i;
      }

      // for(int i: v) cout<<i<<" ";cout<<"\n";
//      reverse(v.begin(),v.end());
      for(int i=1;i<n;i++){
            value=value^v[i];
            // cout<<value<<" ";
      }
      // cout<<"\n";
      return value;


 }
  void solved(){
 
       int n,start;
       cin>>n>>start;
       cout<<xorOperation(n,start)<<"\n";
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
      //     cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}