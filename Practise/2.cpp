#include <bits/stdc++.h>
using namespace std;
map<string,int>score;
vector<pair<string,int>>v;
int n,maxValue,s;
string name;
//2 A Winner
int main() {
    // Your code goes here
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>s;
        if(score.find(name) !=score.end()){
            score[name]+=s;
        }else{
            score[name]=s;
        }
        v.push_back(make_pair(name,score[name]));
    }
    maxValue=INT_MIN;
    for(auto it=score.begin();it!=score.end();it++){
     maxValue=max(maxValue,it->second);
    }
    for(int i= 0;i<n;i++){
        pair<string,int>p=v[i];
        if(score[p.first]==maxValue && p.second>=maxValue){
            cout<<p.first<<endl;
            break;
        }
 
    }
    return 0;
}
