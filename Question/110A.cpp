#include <bits/stdc++.h> // include all standard headers
using namespace std;

#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
  void solved(){
     string s;
     cin>>s;
      int cnt=0;
     for(int i=0;i<s.size();i++){
            int a=s[i]-'0';
         if(s[i]=='4' || s[i]=='7')
           cnt++;
     }
      if(cnt== 4 || cnt== 47|| cnt==74 || cnt==44|| cnt==7)
      cout<<"YES\n";else cout<<"NO\n";

  }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
      solved();
    
    return 0;
}