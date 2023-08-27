#include <bits/stdc++.h> // include all standard headers
using namespace std;
#define ll long long
#define l long long int
#define ld long double
#define pii pair<int, int>
// #define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

// Problem name:
int check(int n){
      if(n==0||n==1)
      return 1;
      return check(n-1)+check(n-2);
}
void solved()
{

      int n, cnt = 0;
      cin >> n;

      vector<int>v(n+1);
      v[0]=v[1]=1;
     
    
      for(int i=2;i<=n;i++){
           v[i]=v[i-1]+v[i-2];
      }
      cout<<v[n]<<"\n";
      // int sum=0;
      // for(int i: v) sum+=i;
      // cout<<sum<<"\n";
      //  if(n==0||n==1){
      //    cout<<1<<"\n"; 
      //    return;   
      //  }
      //  cout<<check(n-1)+check(n-2)<<"\n";
       
       //2-2,3-3,5-8,8-34,15,987

      // Output er age dite hobe
      auto start = chrono::high_resolution_clock::now();

      auto end = chrono::high_resolution_clock::now();
      chrono::duration<double, milli> diff = end - start;
      cerr << (diff).count() << "ms\n";
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int tc; // number of test cases
      cin >> tc;

      while (tc--)
      {
            solved();
      }

      return 0;
}