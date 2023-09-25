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
 char bt[203];
  void solved(){
 
       string str;
       scanf("%s",bt+1);
      
      //  unordered_map<string,int>ump{{".",0},{"-.",1},{"--",2}};
        
  //.-.--
 //. >0
 //-.>1
 //-->2
      //  for(int i=1;i<=strlen(bt+1);i++){
      //       cout<<bt[i];
      //  }
      //  cout<<"\n";
      //  for(auto &i: bt)cout<<i;cout<<"\n";
       int n=strlen(bt+1);
       for(int i=1;i<=n;i++){
            if(bt[i]=='.'){
             str+="0";
             
            }
            else if(bt[i]=='-' && bt[i+1]=='.'){
                str+="1";
                bt[i]=bt[i+1]='\0';
                i++;
          
            }else if(bt[i]=='-' && bt[i+1]=='-'){
                  str+="2";
                    bt[i]=bt[i+1]='\0';  
                    i++;
            }
       }
       cout<<str<<"\n";
       //--.
      // -..-.--

  
}
 
int main(){
        ios_base::sync_with_stdio(false);
      //     cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}