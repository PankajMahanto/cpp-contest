#include <bits/stdc++.h> // include all standard headers
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        // write your code here for each test case
        int n,ans,m;
        cin>>n;

        // Hash Mapping technic
  /*       vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        // for(int i=1;i<=n;i++)cout<<v[i]<<" ";
       map<int,int>mp;
        for(int i=1;i<=n;i++){
            int j=v[i];
            mp[j]++;
        }
        
     for(auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;

        if((i.second==1))
         cout<<i.first<<endl;
     }
*/

//Sorting technic
         vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    sort(v.begin(),v.end());
    //  for(int i=1;i<=n;i++)cout<<v[i]<<" ";
     for(int i=1;i<n;i+=3){
        if(v[i]!=v[i-1]){
           cout<<v[i-1];
           break;  
        }
        
         else if(v[n]!=v[n-1]){
           cout<<v[n-1]; 
           break;
         }
         
         else{
            if(v[i]==v[i-1])
            continue;else {cout<<v[i-1];
            break;}
         }
     }

        
    }
    
    return 0;
}