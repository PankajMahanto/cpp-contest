#include <bits/stdc++.h> // include all standard headers
using namespace std;

int MOD = 1e9 + 7;
int LinearSum(int n)
{
   return (n * (n + 1) / 2) % MOD;
}
int RangSum(int a, int b)
{
   return (LinearSum(a) - LinearSum(b)) % MOD;
}
int totalsum(int n)
{

   int ans = 0, i = 1;
   while (1)
   {
      ans += RangSum(n / i, n / (i + 1)) * (i % MOD)%MOD;
      ans %= MOD;
      if (i == n)
         break;
      i = n / (n / (i + 1));
   }
   return ans;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   // AllDivisors();
   int tc = 1; // number of test cases
               // cin>>tc;
   while (tc--)
   {
      int N;
      cin >> N;

      cout << totalsum(N) << "\n";
   }
   // cout << "Done\n";
   return 0;
}