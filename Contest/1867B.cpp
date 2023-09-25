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
const int N = 100100;
char s[N];
int n;
void solved()
{

      scanf("%d%s",&n,s);
      int a = 0, b = 0;
      for (int i = 0; i < n - 1 - i; i++)
      {
            if (s[i] == s[n - i + 1])
            {
                  b++;
            }
            else
            {
                  a++;
            }
      }
      for (int i = 0; i <= n; i++)
            s[i] = '0';
            s[n + 1] = '\0';
            if (n % 2 == 0)
            {
                  for (int i = 0; i <= b; i++)
                        s[a + 2 * i] = '1';
            }
            else
            {
                  for (int i = a; i < a + 2 * b + 2; i++)
                        s[i] = '1';
            }
      
      // int k=strlen(s);
      // cout<<k<<"\n";
      // for(int i=0;i<k;i++)cout<<s[i];cout<<"\n";
      // cout << s << "\n";
      // for(auto &i: s)cout<<i;cout<<"\n";
      printf("%s\n",s);
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