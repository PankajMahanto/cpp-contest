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
    int n,a,b,cnt=0;
    cin>>n>>a>>b;
    a--;b--;
    while(a!=b)
      {
        a/=2;b/=2;n/=2;cnt++;
      }
    if(n==1)
      cout<<"Final!\n";
      else
      cout<<cnt<<"\n"; 
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
 // Declare any additional variables here
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
  //write your code here for each test case
     solved();
  }
   
     return 0;
}