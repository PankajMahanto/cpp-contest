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
 
       int n;
       cin>>n;
       int sm=0,cm=0;
       for(int i=1;i<=n;i++){
            int m,c;
            cin>>m>>c;
           if(m>c){
            sm++;
           }
           if(m<c){
            cm++;
           }
       }
      //  cout<<sm<<" "<<cm<<"\n";
       if(sm==cm){
            cout<<"Friendship is magic!^^\n";
       }else if(sm>cm){
            cout<<"Mishka\n";
       }else{
            cout<<"Chris\n";
       }
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
          //cin.tie(NULL);cout.tie(NULL);
 
  
      int tc=1;  // number of test cases
      // cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}