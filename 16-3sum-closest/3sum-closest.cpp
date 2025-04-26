class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        //O(n3)
        int n=nums.size();
        int diff=INT_MAX;
       int res=INT_MAX;

       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==target){
                     res=nums[i]+nums[j]+nums[k];
                     return res;
                }
                else{
                    int val=nums[i]+nums[j]+nums[k];
                    if(abs(target-val)<diff){
                        diff=abs(target-val);
                        res=val;
                    }
                }
            }
            
        }
       }
       return res;
    }
};