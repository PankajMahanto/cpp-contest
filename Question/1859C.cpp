#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
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
       vector<int>v;
       int sum=0,m=0;
       for(int i=0;i<n;i++)
            v.pb(i+1);
    //  sort(v.rbegin(),v.rbegin()+n/2);
   for(int i=0;i<n;i++){
          
          sum+=v[i]*(i+1);
          m=max(m,(v[i]*(i+1)));
      
   }
//    cout<<m<<"\n";
     

    cout<<(sum+sum%m-m+1)<<"\n";
           
  
}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 // Declare any additional variables here
  
     int tc;  // number of test cases
     cin>>tc;
  
      while(tc--){
 //write your code here for each test case
    solved();
 }
      
   
     return 0;
}