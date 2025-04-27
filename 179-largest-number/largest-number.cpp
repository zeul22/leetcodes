class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> resArr;
        for(int i=0;i<nums.size();i++){
            resArr.push_back(to_string(nums[i]));
        }

        auto sortComparator=[](string& s1,string& s2){
            if(s1+s2>s2+s1){
                return true;
            }
            return false;
        };
        sort(resArr.begin(),resArr.end(),sortComparator);
        string res="";
         for(int i=0;i<resArr.size();i++){
            res+=resArr[i];
        }
        if(res[0]=='0') return "0";
        return res;

        
        
    }
};