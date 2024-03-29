#include<iostream>
#include<math.h>
#define MAX 1000
using namespace std;

bool hashTable[MAX+1][2];

bool search(int x){
    if(x>=0){
        if(hashTable[x][0]==1)
            return true;
        else
            return false;
    }
    else{
        x=abs(x);
        if(hashTable[x][1]==1)
            return true;
        else    
            return false;
    }
}

void insert(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            hashTable[a[i]][0]=1;
        }
        else{
            hashTable[abs(a[i])][1]=1;
        }
    }
}


int main(){
    int arr[]={2,-1,1,3,-6,-5,9,-7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    int find=-9;
    if(search(find)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present "<<endl;
    }
}