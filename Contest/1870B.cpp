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

     int n, m;
     cin >> n >> m;
     vector<int> a(n), b(m);
     for (auto &i : a)
          cin >> i;
     int mxx = *max_element(a.begin(), a.end()), mnn = *min_element(a.begin(), a.end());
     int A, B, X;
     A = B = X = 0;
     for (auto &j : b)
     {
          cin >> j;
          X|=j;
     }
     for (int j = 0; j < n; j++)
     {
          A^=a[j];
          B^=a[j]|X;
     }
      
      if(A>B) swap(A,B);
      cout<<A<<" "<<B<<"\n";
     // int k = a[0];
     // int mx = 0, mn = INF;
     // for (int i = 1; i < n; i++)
     // {
     //      k ^= a[i];
     //      mx = max(mx, k);
     //      mn = min(mn, k);
     // }
     // if (mxx < mx)
     // {
     //      cout << mxx << " " << mx;
     // }
     // else
     // {
     //      cout << mnn << " " << mxx;
     // }
     // cout << "\n";

     //  cout<<mn<<" "<<mx<<"\n";
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