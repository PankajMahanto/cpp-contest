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
    //    vector<int>v;
       int l=0,r=n-1;
       bool b=true;
    //    for(int i=0;i<n;i++){
    //       v.pb(i+1);
    //    }
    //    for(int i=0;i<n;i++){
    //       cout<<v[i]<<" ";
    //    }
    //   cout<<"\n";

      while(l<=r){
        int m=l+(r-l)/2;
        if(m*m==n){
           cout<<"Yes\n"; 
           b=false; 
           return;
          }         
        else if(m*m<n)
          l=m+1;
        else
          r=m-1;
         
      }
    if(b) cout<<"No\n";
    
  
}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
      freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 // Declare any additional variables here
  
     int tc;  // number of test cases
     cin>>tc;
  
      while(tc--){
 //write your code here for each test case
       solved();
   }
     
     return 0;
}