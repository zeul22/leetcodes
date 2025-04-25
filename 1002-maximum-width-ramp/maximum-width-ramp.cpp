class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        // int start=0;
        // int end=nums.size()-1;
        // int max_ramp=0;
        int n=nums.size();


        // O(n2)
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if(nums[i]<=nums[j]){
        //             max_ramp=max(max_ramp,j-i);
        //         }
        //     }
        // }

        // O(n)
        vector<int>resArr(n,0);
        resArr[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            resArr[i]=max(resArr[i+1],nums[i]);
        }

        int start=0;
        int end=0;
        int ramp=0;

        while(end<n){
            while(start<end && nums[start]>resArr[end]){
                start++;
            }
            ramp=max(ramp,end-start);
            end++;
        }
        return ramp;
    }
};