#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long
#define mod 1000000007

ll extendedGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

ll modularInverse(ll a, ll m) {
    ll x, y;
    ll gcd = extendedGCD(a, m, x, y);

    if (gcd != 1) {
        // Modular inverse doesn't exist
        return -1;
    }

    // Ensure x is positive
    x = (x % m + m) % m;

    return x;
}


ll getPdtUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 1;
    ll mid = (ss + se) / 2;
    return (getPdtUtil(st, ss, mid, qs, qe, 2 * si + 1) % mod * getPdtUtil(st, mid + 1, se, qs, qe, 2 * si + 2) % mod) % mod;
}

ll getMid(ll s, ll e)
{
    return s + (e - s) / 2;
}

ll *constructSTUtil(vector<ll> &a, ll ss, ll se, ll *st, ll si)
{
    if (ss == se)
    {
        st[si] = a[ss];
        return st;
    }

    ll mid = getMid(ss, se);
    st = constructSTUtil(a, ss, mid, st, 2 * si + 1);
    st = constructSTUtil(a, mid + 1, se, st, 2 * si + 2);

    st[si] = (st[2 * si + 1] % mod * st[2 * si + 2] % mod) % mod;
    return st;
}

ll *constructST(vector<ll> &a, ll n)
{
    // Allocate memory for the Segment Tree
    ll x = (ll)(ceil(log2(n)));
    ll max_size = 2 * (ll)pow(2, x) - 1;
    ll *st = new ll[max_size];

    // Construct the Segment Tree
    st = constructSTUtil(a, 0, n - 1, st, 0);

    return st;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    ll product = 1;
    for (int i = 0; i < n; i++)
    {
        product = (product * a[i]) % mod;
    }

    vector<ll> b(n);
    int k = 0, l = n - 1;
    ll *p = constructST(a, n);

    for (int i = 0; i < n; i++)
    {
        ll product = getPdtUtil(p, 0, n - 1, k, l, 0);
        ll rem = product % m;
        b[i] = rem;
        if (s[i] == 'L')
        {
            product = product * modularInverse(a[k++], mod) % mod;
        }
        else
        {
            product = product * modularInverse(a[l--], mod) % mod;
        }
    }

    for (auto x : b)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
