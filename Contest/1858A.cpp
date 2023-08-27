#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define pb push_back


    
 
  void solved(){
 
       int a,b,c;
       cin>>a>>b>>c;
    if(a>b)
     cout<<"First\n";
     else if(a==b && c%2==0)
       cout<<"Second\n";
    else if(a==b && c%2!=0)
      cout<<"First\n";
      else cout<<"Second\n";
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
  //write your code here for each test case
     solved();
  }
   
     return 0;
}