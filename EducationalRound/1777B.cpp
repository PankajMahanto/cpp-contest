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
       int n;
       string s;
       cin>>n>>s;
       bool cnt=0;
       for(int i=0;i<n-1;i++){
        string str="";
           str=str+s[i]+s[i+1];
           if(s.find(str,i+2)!=s.npos) cnt=1;
       }
       cout<<(cnt? "YES\n":"NO\n");
     
  
  
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