/*
Working Principle: We have taken a element from unsoted list to a sorted list
*/

#include<bits/stdc++.h>
using namespace std;

void insertSort(int arr[],int n){

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
    insertSort(arr,n);
    cout<<"Insertion Sort: ";
    printArray(arr,n);
}