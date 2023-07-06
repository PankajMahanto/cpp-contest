#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code goes here
    long long n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    cin>>arr[i];
    long long int cnt=1,ans=1;
    for(long long int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i])
            cnt++;
          else{
            if(cnt>ans)
                ans=cnt;
                cnt=1;
        }
        if(cnt>ans)
        ans=cnt;
    }
    cout<<ans<<endl;
    
    return 0;
}