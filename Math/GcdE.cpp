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
int gcdEx(int a,int b,int &x,int &y){

      if(a==0){
            x=1;y=0;
            return b;
      }
      int x1,y1;
      int g=gcdEx(b%a,a,x1,y1);
      x=y1-b/a*x1;y=x1;
      return g;

}
// int gcdExE(int a,int b,int *x,int *y){

//       if(a==0){
//             *x=0;*y=1;
//             return b;
//       }
//       int xx1,yy1;
//       int g=gcdExE(b%a,a,&xx1,&yy1);
//       *x=yy1-b/a*xx1;*y=xx1;
//       return g;

// }
 
  void solved(){
 
    int n,cnt=0,x,y;
     cin>>n;
     vector<int>v(n);
    for (int i = 0; i <n; i++)
      {
         cin>>v[i];
      }

       int result=v[0];
       int result1=v[0];
       for(int i=1;i<n;i++){
          //  cout<<"GCD("<<result<<","<<v[i]<<")"<<x<<" "<<y<<" "<<"\n";
          //  cout<<"\n";
            result=gcdEx(result,v[i],x,y);
            // result1=gcdExE(result,v[i],&x,&y);
            cout<<"GCD("<<result<<","<<v[i]<<") "<<result<<" "<<x<<" "<<y<<" "<<"\n";
            // cout<<"GCD1("<<result1<<","<<v[i]<<") "<<result<<" "<<x<<" "<<y<<" "<<"\n";
       }
       cout<<result<<"\n";
    
  
  
     //Output er age dite hobe
    auto start = chrono::high_resolution_clock::now();
 
         auto end=chrono::high_resolution_clock::now();
     chrono::duration<double,milli> diff=end-start;
     cerr<<(diff).count()<<"ms\n";
}
 
int main(){
        ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
      freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
  
      int tc;  // number of test cases
      cin>>tc;
  
       while(tc--){
     solved();
  }
   
     return 0;
}