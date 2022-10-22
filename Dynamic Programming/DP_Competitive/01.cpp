/*746. Min Cost Climbing Stairs
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. 
Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.*/

#include<bits/stdc++.h>
using namespace std;
 int dpClimb(int n,vector<int> &dp){
    if(n==0 or n==1)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n]=dpClimb(n-1,dp)+dpClimb(n-2,dp);
}
    
int climbStairs(int n) {
    vector<int> dp(n+1,-1);
    return dpClimb(n,dp);
}

int main(){
    int n=8;
    int res=climbStairs(n);
    cout<<res<<endl;
}