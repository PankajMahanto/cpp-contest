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
 
       int n,cnt=0;
       cin>>n;
       int m=n+1, win=n+1;

       for(int i=1;i<=n;i++){
             int a;
             cin>>a;
             if(m<a && a<win){
                cnt++;
                win=a;
             }
             m=min(m,a);
       }
        
       cout<<cnt<<"\n";
    
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
       solved();
       }
   
     return 0;
}