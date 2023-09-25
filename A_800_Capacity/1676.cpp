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
 
       string s;
       cin>>s;
       int n=0,m=0;
       for(int i=0;i<6;i++){
           if(i>2){
            n+=s[i]-'0';
           }else{
            m+=s[i]-'0';
           }
       }
      //  cout<<n<<" "<<m<<"\n";
       cout<<(n==m?"YES":"NO")<<"\n";
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
          //cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}