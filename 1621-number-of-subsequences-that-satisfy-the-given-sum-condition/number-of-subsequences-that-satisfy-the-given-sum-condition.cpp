class Solution {
public:
    // void recursion(vector<int>& nums, int target, vector<vector<int>>& res,
    //                vector<int>& temp, int result_count) {
    //     if (result_count == nums.size()) {
    //         if (!temp.empty() && (temp[0] + temp[temp.size() - 1] <= target))
    //         {
    //             res.push_back(temp);
    //         }
    //         return;
    //     }

    //     temp.push_back(nums[result_count]);
    //     recursion(nums, target, res, temp, result_count + 1);

    //     temp.pop_back();
    //     recursion(nums, target, res, temp, result_count + 1);
    // }

    // int numSubseq(vector<int>& nums, int target) {
    //     vector<vector<int>> res;
    //     vector<int> temp;
    //     sort(nums.begin(), nums.end());
    //     recursion(nums, target, res, temp, 0);
    //     return res.size();
    // }
    int pow(int base, int exp) {
        // int result = 1;
        int baseDivide=1e9+7;
        // if (exp == 0) {
        //     return 1;
        // }
        // while (exp > 0) {
        //     result =result%baseDivide* base%baseDivide;
        //     exp--;
        // }
        // return result%baseDivide;

        long long result = 1;
    long long b = base;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * b) % baseDivide;
        b = (b * b) % baseDivide;
        exp /= 2;
    }
    return result;
    }

    
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int result = 0;
        int start = 0;
        int end = nums.size() - 1;
        const int baseDivide=1e9+7;
        while (start <= end) {
            if (nums[start] + nums[end] <= target) {
                int temp = pow(2, end - start);
                // result += temp%baseDivide;
                result = (result + temp) % baseDivide;
                start++;

            } else {
                end--;
            }
        }
        return result%baseDivide;
    }
};