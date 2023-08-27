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
    int L=n*(n+1)/2;
     vector<int> v;
    
    int cnt=0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            v.pb(i);
        }
    }
     
   //  random_shuffle(v.begin(),v.end());
    for (int i = 0; i <L; ++i) {
        random_shuffle(v.begin(),v.end());
      //   cout <<v[i]<<" ";
     
      //   int a=abs(v[i]-v[i+1]);
      //    if(a>=1&&a<=2){
      //        random_shuffle(v.begin(),v.end(),a);
      //       cnt++;
      //    }            
    }
    for(int i: v)cout<<i<<" ";
    cout << "\n";

  
}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 // Declare any additional variables here
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
  //write your code here for each test case
     solved();
  }
   
     return 0;
}