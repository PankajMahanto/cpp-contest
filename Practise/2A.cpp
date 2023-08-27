#include <bits/stdc++.h> // include all standard headers
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define N 1010
int score[N];
char name[N][40];

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
// A. Winner

void solve()
{
    ll n;
    cin >> n;
    map<string, int> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> name[i] >> score[i];
        mp[name[i]] += score[i];
        // puts(name[i]);
        // cout << score[i] << endl;
    }
    ll maxscore =-1000000;
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
  //  for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > maxscore)
            maxscore = it->second;
    }
    //   cout << maxscore << endl;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        m[name[i]] += score[i];
        if (mp[name[i]] == maxscore)
        // if (mp[name[i]] == maxscore && m[name[i]] == maxscore)
        {
            puts(name[i]);
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declare any additional variables here

    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        // write your code here for each test case
        solve();
    }
  //  solve();

    return 0;
}
/*
15
aawtvezfntstrcpgbzjbf 681
zhahpvqiptvksnbjkdvmknb -74
aawtvezfntstrcpgbzjbf 661
jpdwmyke 474
aawtvezfntstrcpgbzjbf -547
aawtvezfntstrcpgbzjbf 600
zhahpvqiptvksnbjkdvmknb -11
jpdwmyke 711
bjmj 652
aawtvezfntstrcpgbzjbf -1000
aawtvezfntstrcpgbzjbf -171
bjmj -302
aawtvezfntstrcpgbzjbf 961
zhahpvqiptvksnbjkdvmknb 848
bjmj -735

answer: aawtvezfntstrcpgbzjbf
*/