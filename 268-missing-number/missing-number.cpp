class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nth=nums.size();
        int sum=nth*(nth+1)/2;
        int res_sum=0;
        for(auto it:nums){
            res_sum+=it;
        }
        return sum-res_sum;
        
    }
};