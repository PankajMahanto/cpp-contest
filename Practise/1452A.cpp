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

      int n, cnt = 0;
      cin >> n;
      string str = to_string(n);
      vector<int>v;

      // for (int i = 0; i < str.size(); i++)
      // {
      //       if (str[i] != '0')
      //       {
      //             cnt++;
      //       }
      // }
      // cout << cnt << "\n";
      int j = 0;
      while (n > 0)
      {
            int s = n % 10;
            if (s != 0)
            {
                  int m = s * pow(10, j);
 
                  // cout << m << " ";
                  v.push_back(m);
                
            }
            n /= 10;
            j++;
      }
      // int j = 1;
      // while (n > 0)
      // {
      //       int s = n % 10;
      //       if (s != 0)
      //       {
      //             int m = s * j;
 
      //             // cout << m << " ";
      //             v.push_back(m);
      //       }
      //       n /= 10;
      //       j*=10;
      // }
      cout <<v.size()<< "\n";
      for(int i: v)cout<<i<<" ";
      cout<<"\n";
      

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