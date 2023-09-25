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
 
  void solved(){
 
       int n;
       cin>>n;
       string s;
       cin>>s;
       vector<char>v(n);
       for(auto &i: s) v.push_back(i);
       v.erase(unique(v.begin(),v.end()),end(v));
      //  for(auto &i: v) cout<<i;cout<<"\n";
       set<char>st;
       for(int i=0;i<v.size();i++){
            if(st.count(v[i])){
              cout<<"NO\n";return;
            }else st.insert(v[i]);
       }
        
     cout<<"YES\n";
  
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