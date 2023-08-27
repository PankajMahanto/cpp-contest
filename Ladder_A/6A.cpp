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
 
       int n,x=0,y=0,z=0;
       cin>>n;
     
       for(int i=1;i<=n;i++){
         int a,b,c;
         cin>>a>>b>>c;
          x+=a,y+=b,z+=c;
       }

     
       if(x==0 && y==0 && z==0) cout<<"YES\n";
       else cout<<"NO\n";
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 // Declare any additional variables here
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
  //write your code here for each test case
     solved();
  }
   
     return 0;
}