class Solution {
public:
    int dp[1001][1001];
    int solve(vector<int>& nums,int n,int sum){
        // if(n==nums.size()){
        //     if(sum==0){
        //         return dp[n][sum]=1;
        //     }
        //     return dp[n][sum]=0;
        // }
         if (sum < 0) return 0;
    if (n == nums.size()) {
        return dp[n][sum] = (sum == 0) ? 1 : 0;
    }
    if (dp[n][sum] != -1) {
        return dp[n][sum];
    }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(nums[n]<=sum){
            dp[n][sum]= solve(nums,n+1,sum-nums[n]) + solve(nums,n+1,sum);
        }
        else{
            dp[n][sum]=solve(nums,n+1,sum);
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum=0;
        for(auto it:nums){
            totalSum+=it;
        }
        int mainVal=(totalSum+target)/2;
        if((totalSum + target) % 2 != 0) return 0;
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,mainVal);
    }
};