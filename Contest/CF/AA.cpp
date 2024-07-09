#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

void solve() {
  
      int n;
      cin>>n;
      string x;
      cin>>x;

      int count=-1;
      for(int i=0;i<n;i++){
            if(x[i-1]==x[i] && x[i]=='*') {
                  count=i;
                  break;
            }
      }

      if(count==-1) count=n;
      int ans=0;
      for(int i=0;i<count;i++){
            if(x[i]=='@') ans++;
      }
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
