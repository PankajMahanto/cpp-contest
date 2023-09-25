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
 
       int n,x;
       cin>>n>>x;
       vector<int>v(n);
       for(auto &i: v)cin>>i;

       long long low=0,high=2e9+7;
       while(low<high){
            //find the mid value of the low and high
            long long mid=low+(high-low+1)/2;
            long long cost=0;
            for(int i=0;i<n;i++){
                  //find the maximum value of unit of water in the jar
                  cost+=max(mid-v[i],0LL);
            }
            //check if cost value is less than equal to  x then update the low
            //value otherwise update the high value
            if(cost<=x) low=mid;
            else high=mid-1;
       }
       cout<<low<<"\n";
        
  
  
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