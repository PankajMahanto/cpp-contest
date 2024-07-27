#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// https://codeforces.com/contest/1983/problem/A
void solved(){
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
    cout<<"\n";
}
int main(){
    
    FIO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solved();
    return 0;
}