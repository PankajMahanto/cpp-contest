 #include <iostream>
#include <vector>

using namespace std;

long long solve(int n, long long c, vector<long long> s) {
  long long minw = 1;
  long long maxw = 1;

  for (int i = 0; i < n; i++) {
    minw = max(minw, s[i] / (c - s[i]));
    maxw = max(maxw, s[i] / (c + s[i]));
  }

  while (minw < maxw) {
    long long midw = (minw + maxw) / 2;

    long long used = 0;
    for (int i = 0; i < n; i++) {
      used += s[i] + 2 * midw * s[i];
    }

    if (used == c) {
      return midw;
    } else if (used < c) {
      minw = midw + 1;
    } else {
      maxw = midw - 1;
    }
  }

  return -1;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, c;
    cin >> n >> c;

    vector<long long> s(n);
    for (int j = 0; j < n; j++) {
      cin >> s[j];
    }

    long long result = solve(n, c, s);
    cout << result << endl;
  }

  return 0;
}
