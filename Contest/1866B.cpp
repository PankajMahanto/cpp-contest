 #include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
const int MAX_N = 2e6 + 5;
const int MAX_M = 1e5 + 5;
long long fact[MAX_M];

long long modInverse(long long a, long long m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) {
        x1 += m0;
    }

    return x1;
}

void precomputeFactorials(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

long long calculatePairs(int N, int M, vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
    precomputeFactorials(MAX_M - 1);

    unordered_map<int, int> exp_B;
    for (int i = 0; i < N; i++) {
        exp_B[A[i]] = B[i];
    }

    long long result = 1;
    for (int j = 0; j < M; j++) {
        int prime = C[j];
        int exp_D = D[j];

        if (exp_B.find(prime) == exp_B.end() || exp_B[prime] < exp_D) {
            return 0;
        }

        result = (result * fact[exp_B[prime]]) % MOD;
        result = (result * modInverse(fact[exp_D], MOD)) % MOD;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    int m;
    cin >> m;
    vector<int> C(m), D(m);
    for (int i = 0; i < m; i++)
        cin >> C[i];
    for (int i = 0; i < m; i++)
        cin >> D[i];

    long long ans = calculatePairs(n, m, A, B, C, D);
    cout << ans << "\n";

    return 0;
}
