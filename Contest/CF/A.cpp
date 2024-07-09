#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

void solve() {
  
 int n;
 cin>>n;
 string x,y,z;
 cin>>x>>y>>z;

 string s="";
 for(int i=0;i<n;i++){
      if(x[i]==y[i])
      s+=x[i];
      else
      s+=toupper(x[i]);
 }

   
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
