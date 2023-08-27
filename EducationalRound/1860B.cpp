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
 
       int m,k,a,b;
       cin>>m>>k>>a>>b;
       int kc=m/k; int c1=m%k;// k coin and 1 coin ?? eta idea paichi statement theke
       //jeta dewa ache explanation ee
       int c1f=max(0,c1-a);// coin 1 fancy 
       int c1r=max(0,a-c1);//coin 1 regular
       int kf=max(0,kc-b);//k coin fancy
       int r=min(c1r/k,kf);//replace k to 1 coin
       int ans=c1f+kf-r;//then coin fancy and k fancy and - replace
       cout<<ans<<"\n";
  
  //  11 3 6 1
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