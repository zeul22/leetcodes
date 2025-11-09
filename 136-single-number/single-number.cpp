class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        int ret_val=-1;
        for(auto it:nums){
            if(mpp.find(it)==mpp.end()){
                mpp[it]=1;
            }
            else{
                mpp[it]++;
            }
        }
        for(auto it:mpp){
            if(it.second==1){
                ret_val= it.first;
            }
        }
        return ret_val;
    }
};