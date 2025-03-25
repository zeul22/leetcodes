class Solution {
public:
    string sortString(string s) {
        vector<int>letters(26,0);
        for(auto it:s){
            letters[it-'a']++;
        }
        int start=0;
        int end=letters.size();
        string res="";
        int count=s.size();
        while(count>0){
            for(int i=0;i<26;i++){
                if(letters[i]>0){
                    res+='a'+i;
                    letters[i]--;
                    count--;
                }
            }
            for(int i=25;i>=0;i--){
                if(letters[i]>0){
                    res+='a'+i;
                    letters[i]--;
                    count--;
                }
            }
            

        }
        return res;

        // Things to look out for
        // for loop
        // ulta for loop
        // 
        
    }
};
