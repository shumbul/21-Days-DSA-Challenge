// Problem link: https://bit.ly/48zyVdS 

class Solution {
    const int mod=1e9+7;
    int dp[100001]={0};
  public:
    int nthFibonacci(int n){
        // code here
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n]!=0) return dp[n];
        int n_1=nthFibonacci(n-1)%mod;
        int n_2=nthFibonacci(n-2)%mod;
        return dp[n]=(n_1+n_2)%mod;
        
    }
};

/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
