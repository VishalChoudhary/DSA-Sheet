//printing all the subsequences.
#include<bits/stdc++.h>
using namespace std;

void printSubs(int index,vector<int> &dp,int arr[],int n){
    if(index==n){
        for(auto x:dp){
            cout<<x<<" ";
        }
        if(dp.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    /*Take condition*/
    dp.push_back(arr[index]);
    printSubs(index+1,dp,arr,n);
    dp.pop_back();
    /*Not Take condition*/
    printSubs(index+1,dp,arr,n);
}

int main(){
    int arr[]={3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> dp;
    printSubs(0,dp,arr,n);
    return 0;
}