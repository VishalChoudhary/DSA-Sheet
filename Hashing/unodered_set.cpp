#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){

    unordered_map<string,int> umap;
    umap["vishal"]= 56;
    umap["shiver"]= 76;
    umap["jett"]= 34;
    umap["gfg"]= 67;

    // for(auto x:umap){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }


    string key="shiver";
    if(umap.find(key)!=umap.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }

    if(umap.find(key)!=umap.end()){
        auto temp=umap.find(key);
        cout<<"key"<<temp->first<<endl;
        cout<<"value"<<temp->second<<endl;
    }

    umap["knocks"]= 75;
    // umap.insert(make_pair("gohan",90));

    for(auto it=umap.begin();it!=umap.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    int len=umap.size();
    cout<<len<<endl;

    int a[]={1,3,4,6,5,5,3,2,5,8,9,6,1,0,0};
    unordered_map<int,int> ump; 
    for(int i=0;i<15;i++){
        int key=a[i];
        ump[key]++;
    }
    for(auto it=ump.begin();it!=ump.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}