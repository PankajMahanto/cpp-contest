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
       if(n==1){
            cout<<1;
            return;
       }
        if(n==2||n==3){
            cout<<"NO SOLUTION";return;
        }
        //4
        //2 4 1 3
        if(n%2==0){
            for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
            for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
            //5
            //4 2 5 3 1
        }else{
            for(int i=n-1;i>0;i-=2)
            cout<<i<<" ";
            for(int i=n;i>0;i-=2)
            cout<<i<<" ";
        }
   cout<<"\n";
  
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