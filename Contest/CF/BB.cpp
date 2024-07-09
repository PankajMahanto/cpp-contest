#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

void solve() {
  
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      int y=a[0];
      for(int i=1;i<n;i++){
            if(a[i]>y){
                  y=a[i];
            }
            else {
                  int m=2,temp=a[i];
                  while(a[i]<=y){
                        a[i]=temp*m;
                        m++;
                  }
                  y=a[i];
            }
      }
      int maxVal = *max_element(a.begin(), a.end());
    cout << maxVal << "\n";

     
   
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
