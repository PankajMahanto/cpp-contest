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
  string s;
  cin >> s;
  int n = 0, m = 0;
  // int p1=find(s.begin(),s.end(),'1')-s.begin();
  // int p2=find(s.begin(),s.end(),'3')-s.begin();
  for (int i = 0; i < 9; i++)
  {
    if (s[i] == '1')n = i;
    if (s[i] == '7')m = i;
  }
  // cout << n << " " << m << "\n";
  if (n < m) cout << "17";
  else cout << "71";
  cout << "\n";
  // cout << p1 << " " << p2 << "\n";
  // if (p1 < p2)
  //   cout << "13";
  // else
  //   cout << "31";
  // cout << "\n";

  // int k=1;
  // while(n%k==0) k++;

  // cout<<k<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
  int tc; // number of test cases
  cin >> tc;
  while (tc--)
  {
    solved();
  }

  return 0;
}