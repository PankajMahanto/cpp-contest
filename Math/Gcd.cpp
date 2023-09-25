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
 int gcdE(int a,int b){
      if(a==0)
      return b;
      return gcdE(b%a,a);
 }
  void solved(){
    int n,cnt=0;
     cin>>n;
     vector<int>v(n);
    for (int i = 0; i <n; i++)
      {
         cin>>v[i];
      }

       int result=v[0];
       for(int i=1;i<n;i++){
            result=gcdE(result,v[i]);
       }
       cout<<result<<"\n";
     
  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
 
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms\n";
}
 
int main(){
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}