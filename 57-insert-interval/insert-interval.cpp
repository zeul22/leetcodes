class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInterval) {
        inter.push_back(newInterval);
        sort(inter.begin(),inter.end());
        int n=inter.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()[1]<inter[i][0]){
                ans.push_back(inter[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],inter[i][1]);
            }
        }
        return ans;
        
    }
};