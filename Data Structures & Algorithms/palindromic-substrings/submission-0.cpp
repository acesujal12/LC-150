class Solution {
public:
    int countSubstrings(string s) {
        int ct = 0;
        for(int i = 0; i<s.size(); i++){
            // odd length
            int l = i;
            int r = i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                ct++;
                l--;
                r++;
            }
            // even length
            l = i-1;
            r = i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                ct++;
                l--;
                r++;
            }
        }

        return ct;
    }
};
