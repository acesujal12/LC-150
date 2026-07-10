class Solution {
public:
    int characterReplacement(string s, int k) {

        int changes;
        int mx= INT_MIN;
        
        for(int i =0; i<s.size(); i++){
            unordered_map<char, int> mp;
            int maxf=0;
            for(int j = i; j<s.size(); j++){
                mp[s[j]]++;
                maxf = max(maxf, mp[s[j]]);
                changes = (j-i+1) - maxf;

                if(changes<=k){
                    mx=max(mx, j-i+1);
                }
            }
        }

        return mx;
    }
};
