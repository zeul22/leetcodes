class Solution {
public:
    int factorial(int n) {
    if(n > 1) 
        return n * factorial(n - 1);
    else 
        return 1;
}
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>res(101,0);
        int count=0;
        // for(auto it:nums){
        //     res[it]++;
        // }

        // for(int i=0;i<101;i++){
        //     if(res[i]==nums.size()){
        //         count+=(int)factorial(res[i])/(2*2);
        //         break;
        //     }
        //     if(res[i]>1){
        //         count+=(int)factorial(res[i])/(2);
        //     }
        // }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        }
        return count;
        
    }
};