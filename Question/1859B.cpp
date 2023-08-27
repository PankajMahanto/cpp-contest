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
    
//Problem name: B. Olya and Game with Arrays
  void solved(){
 
       int n;
       cin>>n;
       long long int sum=0;
        long long int m1=INF,m2=INF;
        for(int i=0;i<n;i++){
          int m;
          cin>>m;
         vector<long long int>v(m);
          for(int j=0;j<m;j++){
                cin>>v[j];               
          }
           sort(v.begin(),v.end());
           m1=min(m1,v[0]);
           m2=min(m2,v[1]);
           sum+=v[1];

       }
    //    cout<<m1<<" "<<m2<<"\n";
       cout<<sum+m1-m2<<"\n";
  
  
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
// 3
// 2
// 2
// 1 2
// 2
// 4 3
// 1
// 3
// 100 1 6
// 3
// 4
// 1001 7 1007 5
// 3
// 8 11 6
// 2
// 2 9
