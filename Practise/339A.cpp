#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+')
        continue;
        v.push_back(s[i]-'0');//you should convert the character s[i] 
        //to an integer before pushing it into the vector. You can use 
        
    }
     sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
         cout<<v[i];
        if (i==v.size()-1) cout<<"\n";//remove extra + sign
        else cout<<"+";
    }
    return 0;
}
/*
input:1+1+3+1+3
orginal output:1+1+1+3+3
but my output is:++++11133
*/