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
int MinSum(int n){
     vector<int>v;
     while(n>0){
       v.push_back(n%10);
       n/=10;
     }
     int sum=0;
//      string s1,s2;
     sort(v.begin(),v.end());
//      s1=to_string(v[0])+to_string(v[2]);
//      s2=to_string(v[1])+to_string(v[3]);
//     for(int i: v) cout<<i<<" ";cout<<"\n";
//      cout<<s1<<" "<<s2<<"\n";
     int k1=10*v[0]+v[2];
     int k2=10*v[1]+v[3];
//      cout<<k1<<" "<<k2<<"\n";
     sum=k1+k2;
     return sum;
}
 
  void solved(){
 
       int n;
       cin>>n;
       cout<<MinSum(n)<<"\n";
        
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