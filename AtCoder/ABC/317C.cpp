#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define l long long int
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
 
       
    int n,cnt=0,m;
     cin>>n>>m;
     vector<vector<int>>v(11,vector<int>(m));
     for (int i = 0; i <m; i++)
      {    int a,b,c;
          cin>>a>>b>>c;
          v[a][b]=v[b][a]=c;

      }
      for(int i=0;i<v.size();i++){
          for(int j=0;j<v[i].size();j++){
               // if(v[i][j]!=0)
                cout<<v[i][j]<<" ";
          }
          cout<<"\n";
      }
      cout<<"\n";
     //  sort(u.begin(),u.end());
     //  for(int i=1;i<m;i++){
     //         if(u[i-1]==u[i]){
     //              int ans=0;
     //              ans=max(ar[i-1],ans);
     //              cnt+=ans;
     //         }else{
     //              cnt+=ar[i-1];
     //         }
     //  }
     //  cout<<cnt<<"\n";
      // cout<<"output\n";
     // for (int i = 0; i <m; i++)
     //  {
     //     cout<<v[i]<<" "<<u[i]<<" "<<ar[i]<<"\n";
     //  }
      
  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
 
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms\n";
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