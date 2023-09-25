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
 bool com(const pair<char,int>&p1,const pair<char,int>&p2){
      return p1.second<p2.second;
 }
  void solved(){
 
       string s;
       cin>>s;
      // use normal forloop and cont the value
      //  int n=0,m=1;
      //  for(int i=0;i<s.size();i++){
      // //      vp[s[i]]++;
      //      if(s[i]==s[i-1]){
      //          ++n;
      //          m=max(m,n);
      //      }
      //      else
      //        n=1;
      //  }
      //  cout<<m<<"\n";
    
    // use vector of pair find the repetetation in consecutive element
      vector<pair<char,int>>vp;
      int cnt=1;char c=s[0];
      for(int i=1;i<s.size();i++){
          if(s[i]==c){
            cnt++;
          }else{
            vp.push_back({c,cnt});
            c=s[i];cnt=1;
          }
            
      }
          vp.push_back({c,cnt});
      // for(auto &i: vp)cout<<i.first<<" "<<i.second<<"\n";
      vector<pair<char,int>>::iterator it;
      it=max_element(vp.begin(),vp.end(),com);
      cout<<it->second<<"\n";
                                                                                                             
}
 
int main(){
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
 
  
      int tc=1;  // number of test cases
      // cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}