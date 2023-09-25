#include <bits/stdc++.h> // include all standard headers
using namespace std;
#define ll long long
#define lli long long int
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

      ll n, x, y;
      cin >> n >> x >> y;
      ll m = n / x, k = n / y;
      ll SumX = 0, SumY = 0;
      vector<ll> v, u;
      for (int i = 1; i <= n; i++)
      {     if(i*x<=n)
           { SumX += i * x;
            v.push_back(i * x);}
      }
      for (int i = 1; i <= k; i++)
      {
            if(i*y<=n)
            {SumY += i * y;
            u.push_back(i * y);}
      }
      for (auto &i : v)
            cout << i << ' ';
      cout << '\n';
      for (auto &i : u)
            cout << i << ' ';
      cout << '\n';
      cout << (SumX)<<" "<<SumY<<" "<<SumX-SumY<<"\n";
      
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);cout.tie(NULL);

      int tc; // number of test cases
      cin >> tc;
      while (tc--)
      {
            solved();
      }

      return 0;
}