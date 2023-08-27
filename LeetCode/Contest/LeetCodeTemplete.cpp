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
     int PrintVec(vector<int>& v) {



      //return
     }
 };

int main(){
      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);  
      Solution solution;
// Declare any additional variables here 
      int t;  // number of test cases
      cin>>t;   
       while(t--){
//write your code here for each test case
      int n;
      cin>>n;
      vector<int> v(n);
       for (int i = 0; i < n; i++) {
       cin >> v[i];
      }
            //  vector<int> u=solution.PrintVec(v);
            //  for(int i: u)
            //    cout<<i<<" ";
            //    cout<<"\n";
      cout << solution.PrintVec(v) << "\n"; 
  }
    
      return 0;
}