#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,25,30,35,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int psa[6];
    for(int i=0;i<n;i++){
        if(i==0)
        psa[i]=arr[i];
        else{
            psa[i]=psa[i-1]+arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<psa[i]<<" ";
    }

}