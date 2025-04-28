class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>top2bottom;
        vector<vector<int>>transpose;
        for (int i = 0; i < n; i++) {
                top2bottom.clear();

                for (int j = 0; j < n; j++) {
                    int val2 = grid[j][i];
                    top2bottom.push_back(val2);
                }
                transpose.push_back(top2bottom);
        }
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i]==transpose[j]){
                    count++;
                }
            }
        }
        return count;
    }
};