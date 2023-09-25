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

      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int s = 1, d = 0;
      //  cout<<v.empty()<<"\n";
      //  for(int i: v) cout<<i<<" ";
      //  cout<<"\n";

      // cout<< v.back()<<" "<<*v.begin()<<"\n";
      // if(v.back()>*v.begin()) {
      //        v.pop_back();
      // }else v.erase(v.begin());

      // if(v.back()>*v.begin()) {
      //        v.erase(v.end()-1);
      // }else v.erase(v.begin());

      //  for(int i: v) cout<<i<<" ";
      //  cout<<"\n";
      int Ssum = 0, Dsum = 0;
      while (!v.empty())
      {
            if (!v.empty())
            {
                  if (s == 1)
                  {
                        if (v.back() > *v.begin())
                        {
                              Ssum += v.back();
                              v.pop_back();
                        }
                        else
                        {
                              Ssum += *v.begin();
                              v.erase(v.begin());
                        }
                        s = 0;
                        d = 2;
                  }
            }
            if (!v.empty())
            {
                  if (d == 2)
                  {
                        if (v.back() > *v.begin())
                        {
                              Dsum += v.back();
                              v.pop_back();
                        }
                        else
                        {
                              Dsum += *v.begin();
                              v.erase(v.begin());
                        }
                        s = 1;
                        d = 0;
                  }
            }
      }

      cout << Ssum << " " << Dsum << "\n";
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

      int tc; // number of test cases
      cin >> tc;
      while (tc--)
      {
            solved();
      }

      return 0;
}