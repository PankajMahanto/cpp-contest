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
int SumOfMultiple(int n){
      int sum=0;
      for(int i=1;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0)
             sum+=i;
      }
      return sum;
}
 
  void solved(){
 
       int n;
       cin>>n;
       cout<<SumOfMultiple(n)<<"\n";
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
      //     cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}