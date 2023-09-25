#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#ifdef LOCAL
#define eprintf(...) {fprintf(stderr, __VA_ARGS__);fflush(stderr);}
#else
#define eprintf(...) 42
#endif
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
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 clock_t startTime;
double getCurrentTime() {
return (double)(clock() - startTime) / CLOCKS_PER_SEC;
 }
    
//Problem name: 
 
  void solved(){
 
       int m[10][10]={
       {1,1,1,1,1,1,1,1,1,1},
       {1,2,2,2,2,2,2,2,2,1},
       {1,2,3,3,3,3,3,3,2,1},
       {1,2,3,4,4,4,4,3,2,1},
       {1,2,3,4,5,5,4,3,2,1},
       {1,2,3,4,5,5,4,3,2,1},
       {1,2,3,4,4,4,4,3,2,1},
       {1,2,3,3,3,3,3,3,2,1},
       {1,2,2,2,2,2,2,2,2,1},
       {1,1,1,1,1,1,1,1,1,1},
       };

       vector<vector<char>>v(10,vector<char>(10));
       for(auto &i:v)
       for(auto &j: i)cin>>j;
       int ans=0;

       for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                  if(v[i][j]=='X')
                    ans+=m[i][j];
            }
       }
        
         cout<<ans<<"\n";
  
 }
int main(){
        startTime = clock();
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       for(int i=1;i<=tc;i++){
     solved();
  }
   
     return 0;
}