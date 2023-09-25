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
const int N = 1e7 + 123;

// Problem name: Hermonic Series Calculation all most find all thing Divisors

int cnt[N];
void CntDivisors()
{
   int k = 1e6;
   for (int i = 1; i <= k; i++)
   {
      for (int j = i; j <= k; j += i)
      {
         cnt[j]++;
      }
   }
}

// cout << "Sum of the divisors of a numbers: \n";
int sum[N];
void SumOfDivisors()
{
   int k = 1e6;
   for (int i = 1; i <= k; i++)
   {
      for (int j = i; j <= k; j += i)
      {
         sum[j] += i;
      }
   }
}
// cout << "Sum of the divisors of a numbers: \n";

// Print the all divisors of the numbers
vector<int> PrintD[N];
void AllDivisors()
{
   int k = 1e6;
   for (int i = 1; i <= k; i++)
   {
      for (int j = i; j <= k; j += i)
      {
         PrintD[j].push_back(i);
      }
   }
}
// Print the all divisors of the numbers


// cout << "Multiple of number and divisors sum:\n";

ll MultipleOfDivisorsum(int k)
{
    ll multipleOfSum = 0;
 
      for (int j = 1; j <= k; j++)
      {
         multipleOfSum += 1LL * cnt[j] * j;
      }
   
   return multipleOfSum;
}
ll AllDivisorsum(int k)
{
    ll Divisorsum = 0;
 
      for (int j = 1; j <= k; j++)
      {
         Divisorsum +=cnt[j];
      }
   
   return Divisorsum;
}
// cout << "Multiple of number and divisors sum:\n";

void solved()
{
}

int main()
{
   ios_base::sync_with_stdio(false);
   //   cin.tie(NULL);cout.tie(NULL);

   //  Count Divisors of a numbers
   CntDivisors();
   // Total sum of the divisors of the numbers
   SumOfDivisors();
   // All Divisors of the numbers
   AllDivisors();
 
   int tc; // number of test cases
   cin >> tc;
   while (tc--)
   {
      solved();
      // Here All function work properly limit 1e6 upto perfect
      // then next limit value time limit exceedeted found
      int n;
      cin >> n;
      // Print the all divisors of the numbers
      cout<<"Print All number divisors 1 to N:\n";
      
      for (int i = 1; i <= n; i++)
      {
         cout << i << ":";
         for (auto u : PrintD[i])
            cout << u << " ";
         cout << "\n";
      }
      // Print the all divisors of the numbers

      // Find the exact number Divisors
      cout<<"Count of exact numbers Divisors: ";
      cout << cnt[n] << "\n";
      // Find the exact number Divisors

      cout << "Sum of the divisors of a numbers: ";
      cout << sum[n] << "\n";

      cout << "Multiple of number and divisors sum: ";
      // Multiple of sum means index position and oi index er
      //  cnt value multiple than final sum of all numbers
      cout << MultipleOfDivisorsum(n) << "\n";

   // All Divisors Sum 1 to n
    cout<<AllDivisorsum(n)<<"\n";
     
      
   }

   return 0;
}