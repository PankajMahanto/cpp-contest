#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
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
       int ar[n+1];
       for(int i=1;i<=n;i++)
             cin>>ar[i];
       for(int i=1;i<=n;i++)
             cout<<ar[i]<<" ";cout<<"\n";
        
        cout<<find(ar,ar+n,5);cout<<"\n";
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
        //   cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}