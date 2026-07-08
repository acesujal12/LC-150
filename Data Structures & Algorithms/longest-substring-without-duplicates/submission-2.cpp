class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<int, int> mp;

        int l=0, r =0;
        int maxm=0;

        while(r<n){
            if(mp.find(s[r]) != mp.end() && mp[s[r]]>=l){
                l = mp[s[r]] + 1;
            }
            maxm = max(maxm, r+1 -l);
            mp[s[r]] = r;
            r++;
        }
        return maxm;
    }
};
