#include <iostream>
using namespace std;
void BinaryS(int *a,int l,int r){
    cout<<"Which value search: ";
    int x,flag=1;
    cin>>x;
    while(l<=r){
        int mid=(l+r-l)/2;
        if(x==a[mid]){
            cout<<"Number Found: "<<mid<<" ";
            flag=0;
            break;
        }else if(x>a[mid]){
            l=mid+1;
        }else {
            r=mid-1;
        }
    }
    if(flag) cout<<"Number not Found!!";
}
int main() {
    // Your code goes here
    int n;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   //Binary search
    int l=0,r=n-1;
   BinaryS(a,l,r);
    return 0;
}