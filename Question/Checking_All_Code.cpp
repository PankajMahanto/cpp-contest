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

      // s[0]++,s[1]++,s[2]++,s[3]++;
      // cout<<s<<"\n";
      //  cout<<s.size()<<"\n";
      for(int i=s.size()-1;i>=0;i--){
         if(s[i]>='5'){
              if(s[i]!='9')
                  s[i]++;
         }
         // else{
         //    s[i]='0';
         // }
      }
     
      if(s[0]>='5'){
         cout<<1;
         for(int i=0;i<s.size();i++)
          cout<<"0"; cout<<"\n";
      }      
       else{
          if(s.size()>2){
               cout<<s[0]<<s[1]++;
               for(int i=2;i<s.size();i++)
                 cout<<"0";
                cout<<"\n";   
            } 
            else{
               cout<<s<<"\n";
            }    
       }

    //40862016542130810467  


    // Find First and last Digit of the Number any position
        //  int n;
        //  cin>>n;
        //  n=abs(n);
        //  string s=to_string(n);
        //  int totatD=log10(n);
        //  cout<<totatD<<"\n";
        //  int f=n/pow(10,totatD);
        //    cout<<f<<" , "<<n%10<<"\n";
        //  cout<<"F D: "<<s[0]<<" , "<<"L D: "<<s[s.size()-1]<<"\n";

}
 
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 // Declare any additional variables here 
     int tc;  // number of test cases
     cin>>tc;
      while(tc--){
 //write your code here for each test case
    solved();
 }
     
     return 0;
}