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
 vector<ll> printFirstNegativeInteger(lli A[],lli N, lli K) {
      lli i=0,j=0;
      vector<ll>u,v;

      while(j<N){
           
             if(A[j]<0){
                  v.push_back(A[j]);
             }         
            if(j-i+1<K){
                  j++;
            }else if(j-i+1==K){
                  if(!v.empty()){
                       u.push_back(*v.begin());
                       v.erase(v.begin()); 
                  }else{
                        u.push_back(0);
                  }
               
               i++;j++;
            }
      }
      return u;                                           
 }


//5-> -8 2 3 -6 10 ->k=2;
  void solved(){
   lli n,k;
   cin>>n;
   lli arr[n];
   for(auto &i: arr)cin>>i;
   cin>>k;
   vector<ll>res=printFirstNegativeInteger(arr,n,k);
   for(auto &i: res)cout<<i<<" ";cout<<"\n";
   
       
        
  
  
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