class Solution {
public:
    int dp[201][20001];
    bool solve(int sum,vector<int>&nums,int count){
        if(count==nums.size()){
            return dp[count][sum]=sum==0;
        }
        if(dp[count][sum]!=-1){
            return dp[count][sum];
        }
        if(sum>=nums[count]){
            return dp[count][sum]=solve(sum-nums[count],nums,count+1) || solve(sum,nums,count+1);
        }
        else{
            return dp[count][sum]=solve(sum,nums,count+1);
        }
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(auto it:nums){
            sum+=it;
        }

        if(sum%2==0){
            return solve(sum/2,nums,0);
        }
        return false;
        
    }
};