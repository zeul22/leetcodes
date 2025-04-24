class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<end){
            if(nums[start]+nums[end]>max){
                max=nums[start]+nums[end];
            }
            start++;
            end--;
        }

        return max;

        
    }
};


// 2,3,4,4,5,6
// [6,2];[5,3];[4,4]