class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size(),-1);
        int n=nums.size();
        int count=0;
        int k_changed=k%nums.size();
        for(int i=n-k_changed;i<nums.size();i++){
            v[count++]=nums[i];
        }
        for(int i=0;i<n-k_changed;i++){
            v[count++]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }

    }
};