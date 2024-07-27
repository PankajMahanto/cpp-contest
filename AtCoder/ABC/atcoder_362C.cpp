#include<bits/stdc++.h>
using namespace std;


#define ll long long 
const int n=2e5+5;
ll s1=0,s2=0;
ll l[n],r[n];

int main(){
    int k;
    cin>>k;

    for(int i=1;i<=k;i++){
        cin>>l[i]>>r[i];
        s1+=l[i];
        s2+=r[i];
    }
    if(s1>0 || s2 <0 ){
        cout<<"No\n";
        return 0;
    }else{
        for(int i=1;i<=k;i++){
            ll y=min(r[i]-l[i],-s1);
            l[i]+=y;
            s1+=y;
            if(s1==0){
                cout<<"Yes\n";
                break;
            }
        }
    }
    if(s1 !=0){
        cout<<"No\n";
    }else{
        for(int i=1;i<=k;i++)
        cout<<l[i]<<" ";
    }
return 0;
}
