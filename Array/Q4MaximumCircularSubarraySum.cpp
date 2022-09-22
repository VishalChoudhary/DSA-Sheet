#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[],int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
        currSum=0;
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int wrapSum=0;
    int nonWrapSum=0;

    nonWrapSum=kadane(a,n);

    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=a[i];
        a[i]=-a[i];
    }

    wrapSum=totalSum+kadane(a,n);

    cout<<max(wrapSum,nonWrapSum)<<endl;

}