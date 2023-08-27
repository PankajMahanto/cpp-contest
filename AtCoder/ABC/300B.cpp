 #include <bits/stdc++.h>  // include all standard headers
 using namespace std;
 #define ll long long
 #define l long long int
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
  
   void solved(){
  
        
     int h,w;
      cin>>h>>w;
      vector<vector<char>>v(h,vector<char>(w));
      for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                  cin>>v[i][j];
            }
      }
     
      vector<vector<char>>u(h,vector<char>(w));
      for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                  cin>>u[i][j];
            }
      }
     
     int k2=0;
      for(int s=0;s<h;s++){
         for(int t=0;t<w;t++){
            int k=1;
            for(int i=0;i<h;i++){
                  for(int j=0;j<w;j++){
                        // if(v[(i-s+h)%h][(j-t+w)%w]!=u[i][j]) k=1;
                        if(u[(i+s)%h][(j+t)%w]!=v[i][j]) k=0;
                  }
            }
            if(k){
                  k2=1;
            }
         }
      }
      if(k2)
      cout<<"Yes\n"; else cout<<"No\n";

      //   for(auto i: v)cout<<i<<" ";
      //   cout<<"\n";
      //   for(auto i: u)cout<<i<<" ";
      //   cout<<"\n";
//      for (int i = 0; i <n; i++)
//        {
//          cout<<i<< ;
//        }
//        cout<<;
   
   
      //Output er age dite hobe
     auto start = chrono::high_resolution_clock::now();
  
          auto end=chrono::high_resolution_clock::now();
      chrono::duration<double,micro> diff=end-start;
      cerr<<(diff).count()<<"ms\n";
 }
  
 int main(){
         ios_base::sync_with_stdio(false);
           cin.tie(NULL);cout.tie(NULL);
  
   
       int tc=1;  // number of test cases
      //  cin>>tc;
   
        while(tc--){
      solved();
   }
    
      return 0;
 }