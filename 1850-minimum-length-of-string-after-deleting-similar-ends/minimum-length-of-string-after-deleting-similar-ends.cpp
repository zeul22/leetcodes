class Solution {
public:
    bool isPalindrome(string s){
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    // int minimumLength(string s) {

    //     if(isPalindrome(s)) return 0;

    //     int start = 0;
    //     int end = s.size() - 1;
    //     char temp;
    //     int rem_count = 0;
    //     while (start <= end) {
    //        if (s[start] == s[end]) {
    //             temp = s[start];
    //             rem_count += 2;
    //             start++;
    //             end--;
    //         } else if (s[start] == temp) {
    //             rem_count++;
    //             start++;
    //         } else if (s[end] == temp) {
    //             rem_count++;
    //             end--;
    //         } else {
    //             if(s.size()-rem_count>=0){return s.size()-rem_count;}
    //             else return 0;
    //         }
    //     }
    //      if(s.size()-rem_count>=0){return s.size()-rem_count;}
    //      else return 0;
    // }

    int minimumLength(string s) {
    int start = 0, end = s.size() - 1;
    
    while (start < end && s[start] == s[end]) {
        char ch = s[start];
        while (start <= end && s[start] == ch) {
            start++;
        }
        while (end >= start && s[end] == ch) {
            end--;
        }
    }
    
    return end - start + 1;
}
};