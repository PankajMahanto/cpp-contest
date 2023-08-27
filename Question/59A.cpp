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
 
  void solved(){
 
       string s;
       cin>>s;

    //    bool a=isupper(s[0]);
    //    bool b=isupper(s[s.size()-1]);
    int a=0,b=0;
      for(int i=0;i<s.size();i++){
            if(isupper(s[i]))
             a++;
             else 
             b++;
      }

       if(a >b)
        transform(s.begin(),s.end(),s.begin(),::toupper);
        else
        transform(s.begin(),s.end(),s.begin(),::tolower);

        cout<<s<<"\n";
  
  
}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
       solved();
   
     return 0;
}