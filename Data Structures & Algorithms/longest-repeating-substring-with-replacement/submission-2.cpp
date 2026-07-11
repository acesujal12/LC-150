class Solution {
public:
    int characterReplacement(string s, int k) {

        int changes;
        int mx= INT_MIN;
        
        int l=0,r=0;
        unordered_map<char, int> mp;
        int maxf=0;

        while(r<s.size()){
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);
            changes = (r-l+1) - maxf;
            if(changes <= k){
                mx = max(mx, r-l+1);
            } 
            else {
                mp[s[l]]--;
                l++;
            }
            r++;
        }

        return mx;
    }
};
