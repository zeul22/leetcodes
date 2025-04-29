#include <bits/stdc++.h>
class Solution {
public:
    int MOD=1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }

        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    int val1=mpp[arr[j]]%MOD;
                    int val2=mpp[arr[i]/arr[j]]%MOD;
                    // int total=( val1%MOD * val2%MOD )%MOD;
                    int total = (int)((1LL * val1 * val2) % MOD);
                    mpp[arr[i]]= (mpp[arr[i]]%MOD +total%MOD)%MOD;
                }

            }
        }
        for(auto it:mpp){
            count=(count%MOD+it.second%MOD)%MOD;
        }
        return count%MOD;
        
    }
};