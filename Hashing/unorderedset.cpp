#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<endl;
    }

    int key=20;

    if(s.find(key)==s.end()){
        cout<<"not found";
    }
    else{
        cout<<"found"<<endl;
        s.erase(key);
    }
    int len=s.size();
    cout<<len<<endl;

}