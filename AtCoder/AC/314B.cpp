#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
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
      vector<int>v;
       vector<vector<int>>u;
       for(int i=1;i<=n;i++){
           int m;
           cin>>m;          
           for(int i=0;i<m;i++){
                int a;
                cin>>v[i];               
                u.push_back(v);
           }

       }
       for(int i: v)cout<<i<<" ";
       cout<<"\n";
      
    for(int i=0;i<v.size();i++){
        for(int j=0;j<u.size();j++)
           cout<<u[i][j]<<" ";
    }
   cout<<"\n";

         

      
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
 // Declare any additional variables here
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
  //write your code here for each test case
     solved();
  }
   
     return 0;
}