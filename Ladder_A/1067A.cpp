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

   long long int n,m,k,l,cnt=0;
   cin>>n>>m>>k>>l; 

  long long int  x =((k+l+m-1)/m); 
    //  n/=m;
    // cout<< (x*m<=n && x>0?x:-1);
     n/=m;
    cout<< (x<=n?x:-1);
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
      solved();
    
    return 0;
}