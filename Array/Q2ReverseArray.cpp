//Reverse the Array
//Soln:1) Initialize start and end indexes as start = 0, end = n-1 
// 2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
// start = start +1, end = end – 1

#include<iostream>
using namespace std;

void reverse(int a[],int start,int end){
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[]={10,16,18,12,15,6,3,9,5,22,1};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,0,n-1);
    printArray(a,n);
}