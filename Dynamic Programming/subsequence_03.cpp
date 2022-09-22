/*Print only one subsequence whose sum is k*/
#include<bits/stdc++.h>
using namespace std;

bool printSubsK(int index,vector<int> &dp,int sum,int k,int arr[],int n){
    if(index==n){
        if(sum==k){
            for(auto x:dp) cout<<x<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    dp.push_back(arr[index]);
    sum+=arr[index];
    if(printSubsK(index+1,dp,sum,k,arr,n)==true) return true;
    sum-=arr[index];
    dp.pop_back();

    if(printSubsK(index+1,dp,sum,k,arr,n)==true) return true;
    
    return false;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    vector<int> dp;
    printSubsK(0,dp,0,k,arr,n);
}