
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, c, n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        cout << max(0LL, max(b, c) + 1 - a) << " " << max(0LL, max(a, c) + 1 - b) << " " << max(0LL, max(a, b) + 1 - c) << endl;
    }
}

int main()
{
    solve();
    return 0;
}