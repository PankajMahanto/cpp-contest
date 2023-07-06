
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int ans = 0;
    string s;
    cin >> s;
    char first = 'a';
    for (int i = 0; i <s.length(); i++)
    {
        int c = abs(first - s[i]); 
        ans += min(c, 26 - c);
        first = s[i];
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}