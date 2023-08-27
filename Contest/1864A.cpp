#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define l long long int
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
 
       
    int n,cnt=0,x,y;
     cin>>x>>y>>n;
     vector<int>v(n),u;
      //  v.pb(x);
        v[0]=x;
      for(int i =1; i <n; i++)
      {
          
            // int la=ceil((x+y)/2);
            int la;
            if((x+y)%2==0)
              la=(x+y)/2;
              else
              la=(x+y)/2+1;
            v[i]=la;
            // x=v[i];
      }
      
       v[n-1]=y;
       for(int i=0;i<n-1;i++){
            u.pb(v[i+1]-v[i]);
       }
      for(int i: u) cout<<i<<" ";
      cout<<"\n";
      for(int i: v) cout<<i<<" ";
      cout<<"\n";
     
  
  
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