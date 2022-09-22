// You are given an integer array nums where the largest integer is unique.

// Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

// Example 1:

// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: -1
// Explanation: 4 is less than twice the value of 3, so we return -1.

// Input:
// [1,2,16,35,44,100,27,0]
// Output:
// -1
// Expected:
// 5

#include<bits/stdc++.h>
using namespace std;

int dominantIndex(vector<int> &a){
    int n=a.size();
    int maxm=0,index=0;;
    for(int i=0;i<n;i++){
        if(a[i]>maxm){
            maxm=a[i];
            index=i;
        }
    }
    a.erase(remove(begin(a), end(a), 0), end(a));
    // for(int i=0;i<n;i++){
    //     if(maxm%a[i]!=0)
    //         return -1;
    // }
    return index;
}



int main(){
    vector<int> a{1,2,16,35,44,100,27,};
    int ans=dominantIndex(a);
    cout<<ans;
}