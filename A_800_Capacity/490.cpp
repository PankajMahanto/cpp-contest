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
      vector<int> v(n),u(4);
      for (auto &i : v)
      {
            cin >> i;
           u[i]++;
      }

      vector<int> A, B, C;
      for (int i = 0; i < n; i++)
      {
            if (v[i] == 1)
                  A.push_back(i + 1);
            if (v[i] == 2)
                  B.push_back(i + 1);
            if (v[i] == 3)
                  C.push_back(i + 1);
      }
      auto it = find(u.begin() + 1, u.end(), 0);
      if (it != u.end())
      {
            cout << 0 << "\n";
            return;
      }
      // cout<<"\n";
      // for(auto &i: A)cout<<i<<" ";cout<<"\n";
      // for(auto &i: B)cout<<i<<" ";cout<<"\n";
      // for(auto &i: C)cout<<i<<" ";cout<<"\n";
      int k = min(A.size(), min(B.size(), C.size()));
      cout << k << "\n";
      for (int i = 0; i < k; i++)
      {
            cout << A[i] << " " << B[i] << " " << C[i];
            cout << "\n";
      }
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