#include <bits/stdc++.h>  // include all standard headers
using namespace std;
#define ll long long
#define lli long long int
#define ld long double
#define pii pair<int, int>
//#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
   
const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
    
//Problem name: 
/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
Incomple the symbol and value complete here!!
Symbol       Value
I             1
IV            4
V             5
IX            9
X             10
XL            40
L             50
XC            90
C             100
CD            400
D             500
CM            900
M             1000
Roman numerals are usually written largest to 
smallest from left to right.However, the numeral for four
is not IIII. Instead, the number four is written as IV. 
Because the one is before the five we subtract it making four.
The same principle applies to the number nine, 
which is written as IX. There are six instances 
where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
*/
  string IntToRoman(int n){
     map<int,string,greater<int>> IntR={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
   {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};

    string ans;
    for(auto u: IntR){
       int val=u.first;
       string c=u.second;
       while(n>=val){
            ans+=c;
            n-=val;
       }
    }
    return ans;
  }
  void solved(){
 
       int n;
       cin>>n;
       string roman=IntToRoman(n);
       cout<<roman<<"\n";
        
  
  
}
 
int main(){
        ios_base::sync_with_stdio(false);
      //     cin.tie(NULL);cout.tie(NULL);
 
  
      int tc;  // number of test cases
      cin>>tc;
       while(tc--){
     solved();
  }
   
     return 0;
}