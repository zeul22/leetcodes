class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string,char>mpp;
        map<char,string>mpp2;
        vector<string>stringMatch;

        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                stringMatch.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        stringMatch.push_back(temp);
        if(stringMatch.size()!=pattern.size()) return false;

        for(int i=0;i<stringMatch.size();i++){
            if(mpp.find(stringMatch[i])!=mpp.end()){
                if(mpp[stringMatch[i]]!=pattern[i]){
                    return false;
                }

            }
            else{
                mpp[stringMatch[i]]=pattern[i];
            }
        }
        for(int i=0;i<pattern.size();i++){
            if(mpp2.find(pattern[i]) != mpp2.end()){
                if(mpp2[pattern[i]]!=stringMatch[i]){
                    return false;
                }

            }
            else{
                mpp2[pattern[i]]=stringMatch[i];
            }
        }
        return true;
        
    }
};