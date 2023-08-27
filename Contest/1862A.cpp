#include<bits/stdc++.h>

using namespace std;
void solved(){
int n, m;
        cin >> n >> m; // Size of the carpet
        
        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i]; // Reading the carpet layout
        }
        
        int p=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(carpet[j][i]=="vika"[p]){
                    p++;break;
                }
            }
        }
        
        cout << (p==4 ? "YES" : "NO") <<"\n";
}

int main() {
   ios_base::sync_with_stdio(false);
           cin.tie(NULL);cout.tie(NULL);
           freopen("input.txt","r",stdin);
           freopen("output.txt","w",stdout);

    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        solved();
    }
    
    return 0;
}
