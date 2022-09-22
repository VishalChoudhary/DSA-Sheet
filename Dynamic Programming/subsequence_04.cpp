/*Count the number of subsequence whose sum is k*/
#include<bits/stdc++.h>
using namespace std;

int countSubs(int index,int k,int sum,int arr[],int n){
    if(n==index){
        if(k==sum){
            return 1;
        }
        else return 0;
    }
    sum+=arr[index];
    int l=countSubs(index+1,k,sum,arr,n);
    sum-=arr[index];
    int r=countSubs(index+1,k,sum,arr,n);

    return l+r;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int res=countSubs(0,k,0,arr,n);
    cout<<res;
}