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
vector<int> SubArrayWithGivenSum(vector<int>&v,int k){

      vector<int>u;
      for(int i=0;i<v.size();i++){
            int s=0;
            for(int j=i;j<i+k;j++){
               s+=v[j];
            }
            u.push_back(s);
      }
  
  return u;
}
 
  void solved(){
 
       int n,sum;
       cin>>n>>sum;
       vector<int>v(n);
       for(auto & i: v)cin>>i;
       vector<int>res=SubArrayWithGivenSum(v,sum);
       
       for (auto & i: res)cout<<i<<" ";cout<<"\n";
       cout<<*max_element(res.begin(),res.end())<<"\n";
        
  
  
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