class Solution {
public:
    int MOD=1e9+7;
    int factorial(int n) {
    if(n > 1) 
       return (int)((1LL * (n % MOD) * (factorial(n - 1) % MOD)) % MOD);
    else 
        return 1;
}
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>res(101,0);
        int count=0;
        for(auto it:nums){
            res[it]++;
        }

        // o(n)

        for(int i=0;i<101;i++){
            if(res[i]==nums.size()){
                // count+=(int)(factorial(res[i])/(factorial(2)*factorial(res[i]-2)));
                count+=(res[i]*(res[i]-1))/2;
                break;
            }
            if(res[i]>1){
                count+=(res[i]*(res[i]-1))/2;
                // count+=(int)(factorial(res[i])/(factorial(2)*factorial(res[i]-2)));
            }
        }
        // O(n2)
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]==nums[j] && i<j){
        //             count++;
        //         }
        //     }
        // }
        return count;
        
    }
};