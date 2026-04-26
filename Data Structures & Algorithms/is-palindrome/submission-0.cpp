class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while(r > l){
            
            // Guard added here
            while(l < r && !isalnum(s[l])){
                l++;
            }
            
            // Guard added here
            while(l < r && !isalnum(s[r])){
                r--;
            }
            
            // tolower() added here
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            
            l++;
            r--;
        }
        
        return true;
    }
};
