class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        int start1 = 0;
        int start2 = 0;
        vector<vector<int>> res;
        while (start1 < firstList.size() && start2 < secondList.size()) {
            int l = max(firstList[start1][0], secondList[start2][0]);
            int r = min(firstList[start1][1], secondList[start2][1]);
            if (l <= r) {
                res.push_back({l, r});
            }
            if (firstList[start1][1] < secondList[start2][1]) {
                start1++;
            } else {
                start2++;
            }
        }
        return res;
    }
};