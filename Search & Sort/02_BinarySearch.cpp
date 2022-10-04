/*Pre-required consdition for binary search is that array have to be sorted*/
#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int n,int l,int h){
    while (l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]<target)
        l=mid+1;
        else
        h=mid-1;
    }
    return -1;
    
}


int main(){
    int arr[] = {5,9,17,23,25,45,59,63,71,89};
    int target = 59;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res=binarySearch(arr,target,n,0,n-1);
    if(res==-1)
    cout<<"Target Element not found";
    else
    cout<<"Target elemet found at: "<<res;
    return 0;
}

/*
Time Complexity
Omega(Best case): o(1)
Big Oh(Worst Case): O(logn)
Theta(Average Case): O(logn)
*/