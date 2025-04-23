class Solution {
public:
    bool isVowel(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' ||  a=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(isVowel(s[start]) && isVowel(s[end])){
                char temp=s[start];
                s[start]=s[end];
                s[end]=temp;
                start++;
                end--;
            }
            else if(isVowel(s[start]) ){
                end--;
            }
            else{
                start++;
            }
        }
        return s;
        
    }
};