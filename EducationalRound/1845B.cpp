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
   
       int x1,x2,x3,y1,y2,y3;
       cin>>x1>>y1>>x2>>y2>>x3>>y3;
       int res=(abs(x1-x2)+abs(y1-y2)+1+abs(x1-x3)+abs(y1-y3)+1-abs(x2-x3)-abs(y2-y3+1-1))/2;
        int res2=1+min(max(x1-x2,0),max(x1-x3,0))+
        min(max(x2-x1,0),max(x3-x1,0))+
        min(max(y1-y2,0),max(y1-y3,0))+
        min(max(y2-y1,0),max(y3-y1,0));
       cout<<res<<"\n";
  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
 
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms\n";
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