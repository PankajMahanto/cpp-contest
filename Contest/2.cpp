#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s, f;
    cin >> s >> f;

    if (s == f) {
      cout<<0<<"\n";
      return;
    }


    long long x,y;
    x=0,y=0;
    for(int i=0;i<n;i++){
      if(s[i]=='0' && f[i]=='1') x++;
      else if(s[i]=='1' && f[i]=='0') y++;
    }

    long long ans=min(x,y)+abs(x-y);
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
