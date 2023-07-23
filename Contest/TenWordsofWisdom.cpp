 #include <bits/stdc++.h>
using namespace std;
// #define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
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
#define in int
#define vi vector<int>
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
const int N=1e5;

void solve(){
    
    ll n,b,a,x,y,cnt=0;
    cin>>n;
    rep(i,n){
        cin>>a>>b;
        if(a<=10 && b>=cnt) 
        {
            cnt=b;x=i; 
        }
    }
     cout<<(x+1);
        nl;
        
 }
   
    
    
    
    

   

int main() {
    //   #ifndef ONLINE_JUDGE
    //     FILE;
    // #endif
    FASTIO;
     ll t;
    cin>>t;
    while(t--){
        solve();
    }
 //   solve();
    return 0;
}