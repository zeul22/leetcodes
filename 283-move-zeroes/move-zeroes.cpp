class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>v;
        // int count=0;
        // for(auto it:nums){
        //     if(it==0){
        //         count ++;
        //     }
        //     else{
        //         v.push_back(it);
        //     }

        // }
        // while(count>0){
        //     v.push_back(0);
        //     count--;
        // }
        // nums.swap(v);
        int start=0;
        int end=start;
        while(start<nums.size() && end<nums.size()){
            if(start==end){
                end++;
            }
            else if(nums[start]==0 && nums[end]!=0){
                int temp=nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
                start++;
                end=start;
            }
            else if(nums[start]==0 && nums[end]==0){
                end++;
            }
            else{
                end++;
                start++;
            }
        }
    }
};