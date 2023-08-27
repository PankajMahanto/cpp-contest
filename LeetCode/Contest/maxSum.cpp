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
 bool equal(int num) {
    int firstDigit = num % 10;
    int secondDigit = num / 10;

    return firstDigit == secondDigit;
}
  void solved(){
 
       int n;
       cin>>n;
       vector<int>v(n),u;
       for(int i=0;i<n;i++)
         cin>>v[i];

         int best=-1;
         for(int i=0;i<n;i++){         
           for(int j=i+1;j<n;j++){
               int m=v[i];
               int p=v[j];
               string s=to_string(m);
               string s2=to_string(p);

               int maxD1=*max_element(s.begin(),s.end())-'0';
               int maxD2=*max_element(s2.begin(),s2.end())-'0';
            //    int maxD1=*max_element(s.begin(),s.end())-'0';
            //    int maxD2=*max_element(s2.begin(),s2.end())-'0';
                // cout<<maxD1<<" "<<maxD2 <<"\n";
                if(maxD1==maxD2)
                  u.push_back(m+p);
           }
         }
        
         for(int i=0;i<u.size();i++)
            { 
              
             best=max(best,u[i]);
           }
           

            cout<<best;
            cout<<"\n";
         
//   [31,25,72,79,74]
//1 2 3 4
//[51,71,17,24,42]
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