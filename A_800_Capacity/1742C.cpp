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
 
      //  vector<vector<char>>v(8,vector<char>(8));
      //  for(int i=0;i<8;i++){
      //       for(int j=0;j<8;j++){
      //           char k;
      //           cin>>k;
      //           v[i].push_back(k);
      //       }
      //  }
        vector<vector<char>>v(8,vector<char>(8));
       for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                 cin>>v[i][j];
            }
       }
       int cnt=0,cnt1=0;
       for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                 if(v[i][j]=='B')
                    cnt++;
                 else if(v[i][j]=='R')
                    cnt1++;
            }
       }
     //   cout<<cnt<<" "<<cnt1<<"\n";
     if(cnt<cnt1)cout<<'R';
     else cout<<'B';
     cout<<'\n';
     
      // cout<<'\n';

  
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