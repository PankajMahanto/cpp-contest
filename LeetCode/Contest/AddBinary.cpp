#include <bits/stdc++.h>
using namespace std;
 #define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
 #define ll long long int
 #define ff first
 #define ss second
 #define pb push_back
 #define vi vector<ll>
 #define vs vector<string>
 #define pii pair<ll, ll>
 #define vp vector<pii>
 #define rep(i,a) for(ll i = 0; i < a; i++)
 #define rep1(i,a) for(ll i = 1; i <= a; i++)
 #define rep2(i,a,b) for(ll i = a; i <= b; i++)
 #define rrep(i,a) for(ll i = a-1; i >= 0; i--)
 #define all(v) v.begin(),v.end()
 #define rall(v) v.rbegin(),v.rend()
 #define toupper(s) transform(all(s), s.begin(), ::toupper)
 #define tolower(s) transform(all(s), s.begin(), ::tolower)
 #define unq(x) x.erase(unique(all(x)),x.end())
 #define sz(x) (ll)x.size()
 #define yes cout << YESn
 #define no cout << NOn
 #define out(x) cout<<x<<"\n"
 #define out1(x) cout<<x<< " "
 #define nl cout<<"\n"
 #define read(x) ll x; cin>>x;
 #define vecin(i,a,v) rep(i,a){read(vx);v.pb(vx);}
 #define vecout(i,a,v) rep(i,a){cout1(v[i]);}
 #define gcd __gcd
 #define lcm(a,b) (a*b)/gcd(a,b)
const int M=1e7;
const ll N=1e7;
ll a[N],b[N],sum[N],cnt=0,ans=0;
char c[N],B[N],s[N];
 
//Problem name: 67. Add Binary
  string addBinary(string a, string b) {  
     reverse(a.begin(),a.end());
     reverse(b.begin(),b.end());
     int n,m;
     int c=0;
     string sum;
     n=a.length();m=b.length();
     if(n>m){
        for(int i=m;i<n;i++)
          b+='0';
     }
      else if(m>n){
        for(int i=n;i<m;i++)
         a+='0';
      }
     n=a.length();
     for(int i=0;i<n;i++){
        int l=a[i]-'0';
        int m=b[i]-'0';
        sum+=to_string(l^m^c);
        c=(l&m)|(m&c)|(c&l);
     }
     if(c==1)
        sum+=to_string(c);
        reverse(sum.begin(),sum.end());
        return sum;
    //Large number er jonno this way do not work
        // int i,j,l=0,in=0;
        // string k;
        // int n=a.length();
        // int m=b.length();
        // int sum=0;
        // for(i=n-1;i>=0;i--){
        //    sum+=(a[i]-'0')*pow(2,l);
        //    l++;
        // }
        // for(i=m-1;i>=0;i--){
        //    sum+=(b[i]-'0')*pow(2,in);
        //    in++;
        // }
        //  out(sum);
        // while(1){
        //   k+=to_string(sum%2);
        //   sum/=2;  
        //   if(sum==0)
        //   break;
        // }
        // reverse(k.begin(),k.end());
        // return k;
    }
  void solve(){
    
    string a,b;
    cin>>a>>b;
    string sum= addBinary(a,b) ;
    out1(sum);
        

  }
 
int main()
{
        FASTIO;
       read(t);
       rep1(i,t)
          solve();
  
     return 0;
}