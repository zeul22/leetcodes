#include <bits/stdc++.h>
class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }

        int start=0;
        int end=mpp[nums[start]];
        int count=1;
        int div=1e9+7;

        while(start<nums.size()){
            if(start>end){
                count=(count*2)%div;
            }
                end=max(end,mpp[nums[start]]);
                start++;

        }
        return count;
        
    }
};


