class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto it : nums){
            mp[it]++;
        }

        int mxm=-1;
        int ans=0;
        for(auto it : mp){
            if(it.second>mxm){
                mxm = max(mxm, it.second);
                ans=it.first;
            }
        }

        return ans;
    }
};