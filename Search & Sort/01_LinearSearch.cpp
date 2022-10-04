#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int target){

    for(int i=0;i<n;i++){
        if(arr[i]==target)
            return i;
    }
    return -1;

}


int main(){

    int arr[] = { 2, 3, 4, 10, 40 };
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res=linearSearch(arr,n,target);
    if(res==-1)
    cout<<"Target Element not found";
    else
    cout<<"Target elemet found at: "<<res;
    return 0;
}

/*
Time Complexity:
Omega(Best case): o(1)
Big Oh(Worst Case): O(n)
Theta(Average Case): O(n)
*/