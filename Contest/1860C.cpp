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
 
       int n,cnt=0;
       cin>>n;
       vector<int>v(n),u(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
           u[i]=v[i];
       }
       
    //    for(int i=0;i<n;i++){
    //        cout<<v[i]<<" ";
    //    }
    //    cout<<"\n";
       sort(v.rbegin(),v.rend());
    //    for(int i=0;i<n;i++){
    //        cout<<v[i]<<" ";
    //    }
    //    cout<<"\n";
       for(int i=0;i<n;i++){
           if(v[i]<u[i])
           cnt++;
       }
       cout<<cnt<<"\n";
    
  
}
 
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}