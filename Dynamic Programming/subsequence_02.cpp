/*Print all the subsequence whose sum is k*/
#include<bits/stdc++.h>
using namespace std;

void printSubsK(int index,vector<int> &dp,int sum,int k,int arr[],int n){
    if(n==index){
        if(k==sum)
        {
            for(auto x:dp) cout<<x<<" ";
            cout<<endl;
        }
        return;
    }
    dp.push_back(arr[index]);
    sum+=arr[index];

    printSubsK(index+1,dp,sum,k,arr,n);
    sum-=arr[index];
    dp.pop_back();

    printSubsK(index+1,dp,sum,k,arr,n);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    vector<int> dp;
    printSubsK(0,dp,0,k,arr,n);
}