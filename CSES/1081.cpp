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
int N = 1e7 + 123;
void solved()
{
      int n;
      cin >> n;
      int v[n];
      int k = 1e6;
      vector<ll> common(N, 0);
      // ll common[k+1]={0};
      for (int i = 0; i < n; i++)
      {
            int a;
            cin >> v[i];
            common[v[i]]++;
      }

      for (int i = k; i >= 1; i--)
      {
            int d = 0;
            for (int j = i; j <= k; j += i)
            {
                  d += common[j];
            }
            if (d >= 2)
            {
                  cout << i << "\n";
                  return;
            }
      }
      // cout << "Done\n";
}
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
      int t=1;
      // cin >> t;
      while (t--)
      {
            solved();
      }
      return 0;
}