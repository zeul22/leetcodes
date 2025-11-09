class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int temp_count=0;
        for(auto it:nums){
            if(it==1){
                temp_count++;

            }
            else{
                count=max(count,temp_count);
                temp_count=0;
            }
        }
        count=max(count,temp_count);
        return count;

    }
};