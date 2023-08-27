#include <bits/stdc++.h>  // include all standard headers
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
    
//Problem name: 
string s[102];
  void solved(){
   
    int n ,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
         cin>>s[i]; 
    }
    for(int i=0;i<n;i++){
        string str=s[i];
       if(str.size()>10)
            {
               m=str.size()-2; 
               cout<<str[0]<<m<<str[str.size()-1]<<"\n";
            }
            else{
                cout<<str<<"\n";          
            }
    }
   
    
  
}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 
       solved();
   
     return 0;
}