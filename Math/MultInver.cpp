#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define l long long int
#define ld long double
#define pii pair<int, int>
//#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
   
const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
  
//Problem name: 
 int gcdE(int a,int b){
     // 1st Mehtod which find the multiplicative inverse
//      int c1=1;
//      int d1=0;
//      int d2=1;
//      int c2=0;
     
//      while(b>0){
//       int q=a/b;
//       int r=a%b;
//       int c3=c1-q*c2;
//       int d3=d1-q*d2;
//       c1=c2;
//       c2=c3;
//       d1=d2;
//       d2=d3;
//       a=b;
//       b=r;
//      }
//     return c1;   
    // 2nd Mehtod which find the multiplicative inverse
    //multiplicative means a number is 10 mod 11==1
    // 10 er saathe kotha gun korle
    // setake jodi 11 dia mod kora hoy
    //tahole er maan always 1 hobe etai hole multiplitive 
    //inverse
    // jodi negative value ase multiplicative inverse er
    //tahole er saathe mod valu add kore diye gun kore
    //check korte hobe value 1 hoy ki nah
    // jemon 3 mod 5
    // then we find the multipicative inverse
    // 3X2=>6 mod 5==1 so ekhane multiplicative
    // inverse holo 2 etai proved
    //jeta ke eucludian algorithm dia kora hoy
    // extend eucludian algorithm dia kora hoy
    // eucludian algorithm holo
    // Q  |  A  |  B   |   R   | here Q result means qution A ,B number 2ta and R holo reminder
   // 1     5      3       2      check if b==0 off else A=B,B=R
   // 1     3       2       2       check if b==0 off else A=B,B=R 
   // 1     2       2       0      check if b==0 off else A=B,B=R
   // X    2       0        X     here B==0 so off this loop and ans is A 
   // Last update value is the gcd of the numbers
    // eucludian Extended algorithm holo same just 3 term add here
    // Find T=T1-T2*Q;
    // Q  |  A  |  B   |   R   | T1   | T2  |  T   |here Q result means qution A ,B number 2ta and R holo reminder
   // 1     5      3       2     0      1      -1         check if b==0 off else A=B,B=R,T1=T2,T2=T;
   // 1     3       2       2    1      -1     2           check if b==0 off else A=B,B=R,T1=T2,T2=T;
   // 1     2       2       0    -1      2     -3          check if b==0 off else A=B,B=R,T1=T2,T2=T;
   // X    2       0        X    2       -3            here B==0 so off this loop and ans is T1 is Ans
   // Last update value is the T1 of the numbers is the answer
   // This is called Eucludian Extended algorithm to find the 
   // multiplicative inverse is the result this is the best way we find the
   //result
      int t1=0,t2=1,t=0;
       while (a!=0)
       {
         int q=b/a;
         int r=b%a;
         t=t1-t2*q;
         t1=t2;
         t2=t;
         b=a;
         a=r;
       }
       return t1;

 }
  void solved(){
 
       int n,m;
       cin>>n>>m;
        int x,y;
       int g=gcdE(n,m);
       cout<<g<<"\n"<<"\n";
       if(g<0) cout<<g+m<<"\n";
       else cout<<g<<"\n";
     
    
    
  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
 
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms\n";
}
 
int main(){
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}