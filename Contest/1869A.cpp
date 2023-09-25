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
  // just check n is even or odd
  if (n % 2 == 0)
    cout << 2 << "\n"
         << 1 << " " << n << "\n"
         << 1 << " " << n << "\n";
  else
    cout << 4 << "\n"
         << 1 << " " << n - 1 << "\n"
         << 1 << " " << n - 1 << "\n"
         << n - 1 << " " << n << "\n"
         << n - 1
         << " " << n << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  // cin.tie(NULL);cout.tie(NULL);

  int tc; // number of test cases
  cin >> tc;
  while (tc--)
  {
    solved();
  }

  return 0;
}