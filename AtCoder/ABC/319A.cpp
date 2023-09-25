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

      map<string, int> m;
      m["tourist"] = 3858;
      m["ksun48"] = 3679;
      m["Benq"] = 3658;
      m["Um_nik"] = 3648;
      m["apiad"] = 3638;
      m["Stonefeang"] = 3630;
      m["ecnerwala"] = 3613;
      m["mnbvmar"] = 3555;
      m["newbiedmy"] = 3516;
      m["semiexp"] = 3481;

      string s;
      cin>>s;
      for(auto &i: m){
            if(s==i.first)
            cout<<i.second<<"\n";
      }
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