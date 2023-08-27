#include <bits/stdc++.h> // include all standard headers
using namespace std;

#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
void solved(){
   string s1,s2;
   cin>>s1>>s2;

    reverse(s1.begin(),s1.end());

    cout<<(s1==s2?"YES\n":"NO\n");
     
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
     solved();
    
    return 0;
}