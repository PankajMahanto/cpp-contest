#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// https://codeforces.com/contest/1992/problem/A
void solved(){
    long long int a,b,c;
    cin>>a>>b>>c;
    int v=0;
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                int aa=a+i;
                int bb=b+j;
                int cc=c+k;
                v = max(v, aa*bb*cc);
            }
        }
        cout<<v<<"\n";
    
}
int main(){
    
    FIO;
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solved();
    return 0;
}