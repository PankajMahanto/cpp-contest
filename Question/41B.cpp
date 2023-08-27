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

 int ans,a=2000;
void solved(){
     int n,b;
     cin>>n>>b;
     for(int i=0;i<n;i++){
         int k;
         cin>>k;
         a=min(k,a);
         ans=max(ans,(b/a*k+b%a));

     }
     cout<<ans<<"\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
      solved();
    
    return 0;
}