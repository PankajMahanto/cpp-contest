

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
     int n,q;
    cin>>n;
    vector<int>v(n); 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>q;
    vector<int>u(q);
    for(int i=0;i<q;i++){
        cin>>u[i];
     
    }
    for(int num: u){
     auto lo=lower_bound(v.begin(),v.end(),num);
     int index=lo-v.begin();
        if(*lo==num)
         cout<<"Yes "<<index+1<<endl;
         else cout<<"No "<<index<<endl;
    }
    return 0;
}