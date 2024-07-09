#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

void solve() {
  
      int ans1=0,ans2=0;
      string x;
      cin>>x;

      for(int i=0;i<5;i++){
            if(x[i]=='A')
             ans1++;
             else if(x[i]=='B')
             ans2++;
      }

      if(ans1>ans2) cout<<"A"<<"\n";
      else cout<<"B"<<"\n";
   
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
