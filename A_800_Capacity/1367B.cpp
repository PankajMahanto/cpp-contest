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

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  int odd = 0, even = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] % 2 == 1)
    {
      if (i % 2 == 0)
        odd++;
    }
    else
    {
      if (i % 2 == 1)
        even++;
    }
  }
  // cout << odd << " " << even << '\n';
  if (odd == even)
    cout << odd << "\n";
  else
    cout << -1 << "\n";
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