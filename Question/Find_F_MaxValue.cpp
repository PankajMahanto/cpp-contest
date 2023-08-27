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
    
//Problem name: This is also known is ""Find first max value from the target (value>=x) here x is the target value
 
  void solved(){
 
       vector<int>v={2,5,10,8,12,6,3};
       sort(v.begin(),v.end()); 
        // for(int i=0;i<v.size();i++){
        //     int m= *lower_bound(v.begin(),v.end(),v[i+1]);
        //     int n= *upper_bound(v.begin(),v.end(),v[i+1]);
        //     cout<<m<<" "<<n<<"\n";
        // }
      int m= *upper_bound(v.begin(),v.end(),7);
    //   int m= *lower_bound(v.begin(),v.end(),4);
      cout<<m;
  
  
}
 
int main(){
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