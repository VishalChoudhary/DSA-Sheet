#include<bits/stdc++.h>
using namespace std;

/* Memoization Technique*/
int fib(int n,vector<int> &dp){
    if(n<=1)
    return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fib(n,dp);
}


/*Tabulation Technique*/
int main(){
    long long int n;
    cin>>n;
    long long int prev2=0,prev=1; //using base case
    for(int i=2;i<=n;i++){
        long long int temp=prev+prev2;
        prev2=prev;
        prev=temp;
    }
    cout<<prev; 
}