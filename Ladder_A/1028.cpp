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

void solved()
{

      int n, cnt = 0, m;
      cin >> n >> m;
      vector<vector<char>> v(n,vector<char>(m));
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> v[i][j];
            }
      }
      int k1=0,k2=0,k3=0;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                 if(v[i][j]=='B'){
                     k3++;
                     k1+=i;
                     k2+=j;
                 }
            }
      }
      
      cout<<"Output:\n";
      for(auto i: v){
         for(auto j: i){
            cout<<j;
         }   
         cout<<"\n"; 
      }
      cout<<k1<<" "<<k2<<" "<<k3<<"\n";
      cout<<"Orginal:\n";
      cout<<k1/k3+1<<" "<<k2/k3+1<<"\n";
     
      
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