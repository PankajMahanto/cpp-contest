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

      int n;
      cin >> n;
      vector<int> v(n), u;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      for (int i = n - 1; i >= 0; i--)
      {
            if (i == n - 1)
                  v[i]++;
            if (v[i] == 10)
            {
                  v[i] = 0;
                  if (i != 0)
                        v[i - 1]++;
                  else
                  {
                        v.push_back(0);
                        v[i] = 1;
                  }
            }
      }
      // 6 1 4 5 3 9 0 1 9 5 1 8 6 7 0 5 5 4 3
      for (int i : v)
            cout << i << " ";
      cout << "\n";
      //   int n=v.size();
      //  for(int i=0;i<n;i++){
      //       if(i==n-1)
      //       u.push_back(v[i]+1);
      //       else u.push_back(v[i]);
      //  }
      // string str;long sum=0;
      // int j=0;
      // for(int i=n-1;i>=0;i--){
      //      sum+=v[j]*pow(10,i);
      //      j++;
      // }
      // sum++;
      // str+=to_string(sum);
      //  cout<<sum<<"\n";
      // cout<<str<<"\n";
      //[6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]
      //[6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,4]
      // for(int i=0;i<n;i++){

      //        if(i==n-1){
      //             str+=to_string(v[i]+1);
      //        }else
      //       str+=to_string(v[i]);
      // }
      // // str++;
      // cout<<str<<"\n";

      // for(int i=0;i<str.size();i++){

      //        u.push_back((str[i]-'0'));
      // }
      // for(int i: u) cout<<i<<" ";
      // cout<<"\n";

      // Output er age dite hobe
      auto start = chrono::high_resolution_clock::now();

      auto end = chrono::high_resolution_clock::now();
      chrono::duration<double, milli> diff = end - start;
      cerr << (diff).count() << "ms\n";
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