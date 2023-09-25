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
       vector<pair<int,int>>v(n);
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          v[i].first=x;
          v[i].second=i;
      }
      sort(begin(v),end(v));
      for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<"\n";
      cout<<"\n";
    //  reverse(begin(v),end(v));
    //   for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<"\n";
      vector<int>ans(n);
      for(int i=0;i<n;i++){
        //  ans[v[i].second]=i+1; //when use this line use reverse function
         ans[v[i].second]=n-i;//do not need reverse function
      }
      for(auto &i: ans)cout<<i<<' ';cout<<"\n";

     
     
      // cout<<"\n";
      
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
          // cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}