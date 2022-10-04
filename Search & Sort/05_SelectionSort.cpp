/*
Working Principle: We take a element from unsoted list to a sorted list
by taking empty in sorted list in selection sort.
find the minimum element in the unsorted list and swap it with the begining
element of the unsorted array.
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
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
    selectionSort(arr,n);
    cout<<"Selection Sort: ";
    printArray(arr,n);
}