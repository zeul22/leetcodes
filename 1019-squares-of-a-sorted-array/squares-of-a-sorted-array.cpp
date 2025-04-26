class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // O(n2)
        // vector<int>res(nums.size(),0);
        // for(int i=0;i<nums.size();i++){
        //     res[i]=nums[i]*nums[i];
        // }
        // sort(res.begin(),res.end());
        // return res;

        // O(n) : Two Pointers

        int start=0;
        int end=nums.size() -1;
        vector<int>res;
        while(start<=end){
            if(abs(nums[start])>abs(nums[end])){
                res.push_back(abs(nums[start]));
                start++;
            }
            else{
                res.push_back(abs(nums[end]));
                end--;
            }
        }
        for(int i=0;i<nums.size();i++){
            // cout << res[i] << " ";
            // cout << endl;
            int val=res[i]*res[i];
            res[i]=val; 
            // cout << res[i] << " ";
        }
        reverse(res.begin(),res.end());
        cout << endl; 
        return res;
    }
};


// -4,-1,0,3,10
// 10,4,3,1,0