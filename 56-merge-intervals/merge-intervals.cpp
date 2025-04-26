class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        // o(nlogn) + o(2n)
        // for (int i = 0; i < intervals.size(); i++) {
        //     int start = intervals[i][0];
        //     int end = intervals[i][1];
        //     if (!ans.empty() && end <= ans.back()[1]) {
        //         continue;
        //     }
        //     for (int j = i + 1; j < intervals.size(); j++) {
        //         if (end >= intervals[j][0]) {
        //             end = max(end, intervals[j][1]);
        //         } else {
        //             break;
        //         }
        //     }
        //     ans.push_back({start, end});
        // }
        // return ans;

        // O(nlogn) + O(n)
        int n=intervals.size();

        for(int i=0; i<n; i++){
            if(ans.empty()||  ans.back()[1] <intervals[i][0] ){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};