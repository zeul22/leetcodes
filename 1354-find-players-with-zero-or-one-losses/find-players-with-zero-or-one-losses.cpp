class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,pair<int,int>>mpp;
        for(auto it:matches){
            int win=it[0];
            int loss=it[1];
            if(mpp.find(win)==mpp.end()){
                mpp[win]={0,0};
            }
            if(mpp.find(loss)==mpp.end()){
                mpp[loss]={0,0};
            }
            mpp[win].first++;
            mpp[loss].second++;
        }

        vector<int>wins;
        vector<int>loss;
        vector<vector<int>>res;
        for(auto it:mpp){
            if(it.second.second==0){
                wins.push_back(it.first);
            }
            else if(it.second.second==1){
                loss.push_back(it.first);
            }
        }
        res.push_back(wins);
        res.push_back(loss);
        return res;
        
    }
};