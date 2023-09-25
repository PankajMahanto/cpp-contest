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
//Alternative Function
vector<int>MaxSubArraySum(vector<int>& v,int k){
       int n=v.size();
       int i=0,j=0,sum=0;//here i=start and j=end
        vector<int>u;
       while(j<n){
          sum+=v[j];
          if(j-i+1<k){
            j++;
          }else if(j-i+1==k){
              u.push_back(sum);
             sum-=v[i];
             i++;j++;
            //  sum+=v[j];
          }
       }
       return u;
}
vector<int> MaxSum(vector<int>& v,int k){
        vector<int>u;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        } 
        u.push_back(sum);
     
        for(int j=k;j<v.size();j++){             
              sum+=v[j]-v[j-k];
              u.push_back(sum);
        }
        //Alternative Approach here m do not need above shows
        // int m=0;
        // for(int j=k;j<v.size();j++){
              
        //       sum+=v[j]-v[m];
        //       m++;
        //       u.push_back(sum);
        // }
    
     return u;
}
 
  void solved(){
 
       int n,k;
       cin>>n>>k;
       vector<int>v(n);
       for(auto &i: v) cin>>i;
       vector<int>res=MaxSum(v,k);
       for(auto & i: res) cout<<i<<" ";cout<<"\n";
       cout<<*max_element(res.begin(),res.end())<<"\n";
       cout<<"Alternative Approach:\n";
       vector<int>re=MaxSubArraySum(v,k);
       for(auto & i: re) cout<<i<<" ";cout<<"\n";
       cout<<*max_element(re.begin(),re.end())<<"\n";

  
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