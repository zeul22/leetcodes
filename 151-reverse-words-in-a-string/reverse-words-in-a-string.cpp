class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        vector<string> res;
        string temp="";
        while(end<s.size()){
            if(s[end]==' '){
                if(temp!=""){
                 res.push_back(temp);
                }
                start=end;
                temp="";
                end++;
            }
            else{
                temp+=s[end];
                end++;
            }
        }
        if(temp!=""){
        res.push_back(temp);

        }
        string result_string="";
        for(int i=res.size()-1;i>=0;i--){
            if(i==0){
                result_string+=res[i];
            }
            else{
                result_string+=res[i] + " ";
            }
        }
        return result_string;
        
    }
};