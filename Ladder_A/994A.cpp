#include <bits/stdc++.h>
using namespace std;
#define FILE freopen("fafa.txt", "r", stdin);freopen("fafaout.txt", "w", stdout)
#define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a) for(int i = 0; i < a; i++)
#define rep1(i,a) for(int i = 1; i <= a; i++)
#define vecin(i,a,v) rep(i,a){int vx;cin>>vx;v.pb(vx);}
#define vecout(i,a,v) rep(i,a){cout1(v[i]);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cout(ans) cout << ans << "\n"
#define cout1(ans) cout << ans << " "
#define nl cout<<"\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (int)x.size()
#define pb push_back
#define ll long long int
#define l long long
#define d double

#define vi vector<int>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)

const int N=1e5;

//A. Fingers Print

void solve(){
   ll n,m;
   cin>>n>>m;
   vi v;
   ll a[n];
   rep(i,n){
      cin>>a[i];
   }
   rep(i,m){
      int a;
      cin>>a;
      v.pb(a);
   }
   // find function use to check the value are exist or not 
   //if exist then print that the value of a[i] this the the 
   // orginal case of the problem
   rep(i,n){
       if(find(v.begin(),v.end(),a[i])!=v.end()){
            cout1(a[i]);
       }
   }
 
   //Here Print the sequence any order 
   /*
   map<int,int>np;
   rep(i,n){
      int a;
      cin>>a;
      np[a]++;
   }
   rep(j,m){
      int b;
      cin>>b;
       np[b]++; 
   }
   
   for(auto i: np){
      // cout<<i.first<<" "<<i.second<<endl;
      if(i.second==2){
         cout<<i.first<<" ";
      }
   }
*/
   nl;
}

int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    solve();
    return 0;
}