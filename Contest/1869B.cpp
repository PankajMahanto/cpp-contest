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
 
       int n,k,a,b;
       cin>>n>>k>>a>>b;
       vector<ll>v(n+1),u(n+1);
       for(int i=1;i<=n;i++){
            cin>>v[i]>>u[i];
          
       }
       ll sum=llabs(v[a]-v[b])+llabs(u[a]-u[b]);
      //  int sum=0,s=0;
     //  cout<<sum<<"\n";
      ll ma=LLONG_MAX/2,mb=LLONG_MAX/2;
       for(int i=1;i<=k;i++){
            
           ma=min(ma,llabs(v[a]-v[i])+llabs(u[a]-u[i]));
           mb=min(mb,llabs(v[b]-v[i])+llabs(u[b]-u[i]));
          //  cout<<ma<<" "<<mb<<"\n";
       }
      sum=min(sum,ma+mb);
       cout<<sum<<"\n";
        
  
  
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