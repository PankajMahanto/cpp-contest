#include <bits/stdc++.h>
using namespace std;
const int N=1e5;

int main() {
    // Your code goes here
    int n;
    cin>>n;
    int a[N];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int sear;
    cin>>sear;
     sort(a,a+n);
   bool y=binary_search(a,a+n,sear);
   if(y) cout<<"found the number: ";
   else cout<<"not found the number";
    return 0;
}
// https://codeforces.com/blog/entry/55274 all problem topics wise