#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pb push_back
#define eb emplace_back

//Problem name: 
  int ar[105],br[105],ans;
  void solved(){
 
       int n,m;
       cin>>n>>m;
       for(int i=1;i<=m;i++){
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         for(int k=a;k<=b;k++){
            if(ar[k]>c || ar[k]==0){
                 ar[k]=c;
                 ans-=br[k];
                 br[k]=d;
                 ans+=br[k];
            }
         }
       }
       cout<<ans<<"\n";// Single Test Case run korte hobe nah 
       //hole ans bhul dekhay reason jani nah
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 // Declare any additional variables here
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
//   write your code here for each test case
     solved();
  }
   
     return 0;
}