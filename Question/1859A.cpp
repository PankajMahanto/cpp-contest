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
     
     int n;
     cin>>n;
     vector<int>v(n),b,c;
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int m=*max_element(v.begin(),v.end());

      for(int i=0;i<n;i++){
          if(v[i]%m==0)
           c.pb(v[i]);
         else
           b.pb(v[i]);
      }

      if(b.size()<=0||c.size()<=0)
        {
            cout<<-1<<"\n";
            return;
        }
      cout<<b.size()<<" "<<c.size()<<"\n";
        
      for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
        cout<<"\n";
      for(int i=0;i<c.size();i++)
        cout<<c[i]<<" ";
        cout<<"\n";

      
       
  
  
}
 
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
 
 // Declare any additional variables here
  
     int tc;  // number of test cases
     cin>>tc;
  
      while(tc--){
 //write your code here for each test case
    solved();
 }
      
   
     return 0;
}