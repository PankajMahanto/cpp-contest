#include <bits/stdc++.h>  // include all standard headers
using namespace std;
auto start=chrono::steady_clock::now();
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
       vector<int>v(n+1);
       for(int i=1;i<=n;i++) cin>>v[i];


  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
           for(int i=1;i<=n;i++){
              if(v[i]==i) cnt++;
           }
           cout<<(cnt+1)/2<<"\n";
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms";
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