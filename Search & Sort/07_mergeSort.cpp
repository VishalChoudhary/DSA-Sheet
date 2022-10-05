/*Merge Sort is one of the most popular sorting algorithms that is based on the principle of Divide and Conquer Algorithm.
Here, a problem is divided into multiple sub-problems. Each sub-problem is solved individually. 
Finally, sub-problems are combined to form the final solution.
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int lb,int mid,int ub){
    int i=lb,j=mid+1,k=lb;
    int b[ub+1];
    while (i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while (j<=ub)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }    
    for(k=lb;k<=ub;k++){
        arr[k]=b[k];
    }
}

void mergeSort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,9,17,23,25,45,59,63,71,89};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    cout<<"Selection Sort: ";
    printArray(arr,n);
}