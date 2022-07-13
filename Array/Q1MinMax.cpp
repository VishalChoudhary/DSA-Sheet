// Arrays	Maximum and Minimum Element in an Array
#include<iostream>
using namespace std;
//soln: take max and min as first element and then compare it to the next element if the next element is 
//smaller than the min than swap(min and a[i]) and vice versa for maxm process
int getMax(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int getMin(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

int main(){
    int a[]={10,16,18,12,15,6,3,9,5,22,1};
    int n=sizeof(a)/sizeof(a[0]);
    int min=getMin(a,n);
    int max=getMax(a,n);
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}