#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
  int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   int x,a,b;
   cin>>x;
   v.erase(v.begin()+x-1);
//    for(int num: v){
//        cout<<num<<" ";
//    }
//    cout<<endl;
   cin>>a>>b;
   v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(auto num: v){
        cout<<num<<" ";
    }
    

    return 0;
}