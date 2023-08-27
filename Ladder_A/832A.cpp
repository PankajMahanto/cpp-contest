 #include <bits/stdc++.h>
 using namespace std;
 #define FASTIO ios::sync_with_stdio(false);cin.tie(NULL)
 #define rep(i, a) for (ll i = 0; i < a; i++)
 #define rep1(i, a) for (ll i = 1; i <= a; i++)
 #define vecin(i,a,v) rep(i,a){ll vx;cin>>vx;v.pb(vx);}
 #define vecout(i,a,v) rep(i,a){cout1(v[i]);}
 #define nl cout<<"\n"
 #define yes cout<<"YES"
 #define no cout<<"NO"
 #define all(v) v.begin(),v.end()
 #define rall(v) v.rbegin(),v.rend()
 #define sz(x) (ll)x.size()
 #define pb push_back
 #define ll long long int
 #define vi vector<ll>
 #define gcd __gcd
 #define lcm(a,b) (a*b)/gcd(a,b)
 const int N=1e5;
 //Problem name:Sasha and Sticks 
 void solve(){
    ll n,k; 
    cin>>n>>k;
   ll v=n/k;
    if(v%2==0){
        no;nl;
    }else yes;
    // if(k==1)
    // return;
    // while(n>=k){
       
    //     if(f==1){
    //         cnt++;
    //         n=n-k;
    //         f2=2;
    //         f=0;
    //     }
    //     else{
    //         if(f2==2){
    //         cnt2++;
    //         n=n-k;
    //         f=1;
    //         f2=0;
    //          }
    //     }

    // }
    // if(cnt>cnt2)
    // {
    //     yes;nl;
    // }
    // else{
    //     no;nl;
    // }
 
 }
 
 /**
  * @brief description
  * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
  * @date 2023-08-05 (17:31)
  * 
  * @returns int
  */
 
 int main()
 {
      
         FASTIO;     
         solve();
      return 0;
 }