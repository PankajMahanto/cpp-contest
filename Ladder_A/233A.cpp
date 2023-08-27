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
 
       int n;
       cin>>n;
       int arr[n+1];
       for(int i=1;i<=n;i++)
          arr[i]=i;
          if(n%2!=0){
            cout<<-1<<"\n";
            return;
          }
          for(int i=1;i<=n;i++){
              if(arr[i]<arr[i+1]){
                  swap(arr[i],arr[i+1]);
                  i++;
              }
          }
         for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
          cout<<"\n";
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}