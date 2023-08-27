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
 #define all(v) v.begin(),v.end()
 #define rall(v) v.rbegin(),v.rend()

 //Problem name: 
 class Solution {
public:
    int rev(int x) {
        int ans=0;
         while(x<0){
            ans*=10;
            ans+=x%10;
            x/=10;
         }
            return ans;
    }
};

int main(){
      ios_base::sync_with_stdio(false);
      // cin.tie(NULL);cout.tie(NULL);
      // freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);  
      Solution solution;
// Declare any additional variables here 
      int t;  // number of test cases
      cin>>t;   
       while(t--){
//write your code here for each test case
      int n;
      cin>>n;
            
      cout << solution.rev(n) << "\n"; 
  }
    
      return 0;
}