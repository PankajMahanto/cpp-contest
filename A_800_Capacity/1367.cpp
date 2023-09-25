#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define lli long long int
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
 
       char st[105];
  void solved(){

      string s,str;
      cin>>s;
      str+=s[0];
      int n=s.size();
      for(int i=1;i<n;i++){
            if(i%2==1)
            str+=s[i];
      }
      cout<<str<<"\n";
 
      //  scanf("%s", st+1);

      //  for(auto &i: st)cout<<i;cout<<"\n";
      //  for(int i=1;i<=strlen(st+1);i++)cout<<st[i];cout<<"\n";

      //  int n=strlen(st+1);
      //  cout<<n<<"\n";
      //  string str;
      //  str+=st[1];
      //  for(int i=2;i<=n;i++){
      //       if(i%2==0){
      //             str+=st[i];
      //       }
      //  }
      //   cout<<str<<"\n";
    
  
  
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