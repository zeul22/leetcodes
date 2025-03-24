class Solution {
public:
    bool buddyStrings(string s, string goal) {
        

        // Way1: Through 2 for loops & comparing: O(n2)
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         char temp=s[i];
        //         s[i]=s[j];
        //         s[j]=temp;
        //         if(s==goal) return true;
        //         temp=s[i];
        //         s[i]=s[j];
        //         s[j]=temp;

        //     }
        // }
        // return false;

        // int start1=0;
        // int start2=0;
        // if(s.size()!=goal.size())return false;

        // int count=0;
        // int rep1=0;

        // while(start1<s.size() && start2<s.size()){
        //     if(s[start1]==goal[start2]){
        //         start1++;
        //         start2++;
        //     }
        //     else{
        //         if(count==0){

        //             rep1=start1;
        //             count++;
        //         }
        //         else{

        //             char temp=s[rep1];
        //             s[rep1]=s[start1];
        //             s[start1]=temp;
        //             if(s==goal)return true;
        //             return false;
        //         }
        //         start1++;
        //         start2++;

        //     }
        // }

        // return false;


        if (s.size() != goal.size()) return false;


        if (s == goal) {

            unordered_set<char> seen;
            for (char c : s) {
                if (seen.count(c)) return true;
                seen.insert(c);
            }
            return false;
        }


        vector<int> diff1, diff2;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != goal[i]) {
                diff1.push_back(s[i]);
                diff2.push_back(goal[i]);
            }
        }


        return diff1.size() == 2 && diff1[0] == diff2[1] && diff1[1] == diff2[0];

        
    }
};