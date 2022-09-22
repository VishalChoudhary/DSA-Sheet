#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<string> s;
    s.insert("abcd");
    s.insert("bcde");
    s.insert("tukf");
    s.insert("uiyn");
    s.insert("cbda");

    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }

    string key="iyyf";
    if(s.find(key)==s.end())
    cout<<"element not found";
    else
    cout<<"element found";
}