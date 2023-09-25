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
  int n, cnt = 0, x, y;
  cin >> x >> y >> n;
  vector<int> v(n);
  v[0] = x;
  v[n - 1] = y;
  int k = n;
  for (int i = 1; i < n - 1; i++)
    v[n-i-1]=v[n-i]-i;
    if(v[1]-v[0]<=v[2]-v[1]){
      cout<<-1<<'\n';
      return;
    }

  for (int i = 0; i < n; i++)
    cout << v[i] << " ";
  cout << "\n";
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