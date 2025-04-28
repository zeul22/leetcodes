class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        for(auto it:arr){
            if(mpp.find(it)==mpp.end()){
                mpp[it]=0;
            }
            mpp[it]++;
        }
        map<int,int>mpp2;
        for(auto it:mpp){
            if(mpp2.find(it.second)!=mpp2.end()){
                return false;
            }
            mpp2[it.second]=0;
            mpp2[it.second]++;
        }
        return true;
        
    }
};