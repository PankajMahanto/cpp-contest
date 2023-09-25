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
    
//Problem name: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&company[]=Google&sortBy=submissions
// https://leetcode.com/problems/subarray-sum-equals-k/
int SubArraySum(vector<int>&v,int s){
      int sum,best=0,cnt=0;
       int n=v.size();

       for(int i=0;i<n;i++){
            // sum=max(sum+v[i],v[i]);
            // best=max(sum,best);
            // cout<<best<<" ";
             sum=0;
            for(int j=i;j<n;j++){
              sum+=v[j];                
               if(s==sum)cnt++;  
             }
            cout<<cnt<<" ";
       } 
       cout<<"\n";
      //  cout<<cnt<<"\n";
      
      return cnt;
}
// 8 -1 2 4 -3 5 2 -5 2
  void solved(){
 
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto &x: v) cin>>x;
       int sum;cin>>sum;

        cout<<SubArraySum(v,sum)<<"\n";
  
  
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