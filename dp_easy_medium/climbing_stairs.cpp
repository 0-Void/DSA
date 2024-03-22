#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :

    int memo(int n,vector<int>& dp){
          
        if(n==1 || n==0){
            return 1;
        }
        if(dp[n]!=-1)
            return dp[n];

        dp[n]=memo(n-1,dp) + memo(n-2,dp);
       


        return dp[n];
    }

    int climbStairs(int n) {
        // Recursion -----------------------------------
        // if(n==1 or n==0)
        //     return 1;
        // return climbStairs(n-1) + climbStairs(n-2);


// ------------------dp(memoization)-----------------
        vector<int>dp(n+1,-1);
        return memo(n,dp);
      

    // -------------------Tabulation-----------
    // vector<int>dp(n+1);
    // dp[0]=1;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-2]+dp[i-1];
    // }
    // return dp[n];
    }
};



