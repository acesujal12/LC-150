class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hsh[256];
        for(int i = 0; i< 256; i++){
            hsh[i] = -1;
        }
        int l = 0;
        int r = 0;
        int maxlen=0;

        while(r<s.size()){
            if(hsh[s[r]]!= -1){
                if(hsh[s[r]] >= l){
                    l = hsh[s[r]] + 1;
                }
            }
            maxlen = max(maxlen, r-l+1);
            hsh[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};
