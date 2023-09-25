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
bool isOpen(char c)
{
      return c == '(' || c == '{' || c == '[';
}
bool isValid(string s)
{

      stack<char> st;
      for (int i = 0; i < s.size(); i++)
      {
            if (isOpen(s[i]))
            {
                  st.push(s[i]);
            }
            else
            {
                  if (st.empty() || s[i] == ')' && st.top() != '(' 
                  || s[i] == '}' && st.top() != '{' ||
                      s[i] == ']' && st.top() != '[')
                        return false;
                  st.pop();
            }
      }
      return st.empty();
}

void solved()
{

      string s;
      cin >> s;
      cout << (isValid(s) ? "true" : "false") << "\n";
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