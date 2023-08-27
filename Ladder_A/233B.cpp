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
 long long digit(long long n){
   long long  sum=0;
   while(n){
     sum+=n%10;
     n/=10;
   }
   return sum;
 }
  void solved(){
 
     long long n;
       cin>>n;
   
    long long l=sqrt(n);

    for (long long i = l; i >=l-90; i--)
    {
         if(i*i+digit(i)*i==n){
            cout<<i<<"\n";return;
         }
    }
    cout<<"-1"<<"\n";
  
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