class Solution {
public:
    string longestPalindrome(string s) {

        int resLen = 0, resIdx = 0;
        for(int i = 0; i<s.size(); i++){
            // odd length
            int l = i;
            int r = i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                if(r-l+1 > resLen){
                    resLen = r-l+1;
                    resIdx = l;
                }
                l--;
                r++;
            }
            // even length
            l = i-1;
            r = i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                if(r-l+1 > resLen){
                    resLen = r-l+1;
                    resIdx = l;
                }
                l--;
                r++;
            }
        }

        return s.substr(resIdx, resLen);
    }
};
