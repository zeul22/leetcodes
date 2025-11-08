class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int count=0;
        for(auto it:nums){
            if(it==0){
                count ++;
            }
            else{
                v.push_back(it);
            }

        }
        while(count>0){
            v.push_back(0);
            count--;
        }
        nums.swap(v);
    }
};