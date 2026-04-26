class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> prefix(nums.size());
        prefix[0]=prod;
        for(int i = 1; i<nums.size(); ++i){
            prefix[i] = prefix[i-1]*nums[i-1];
        }

        int prod2 = 1;
        vector<int> suffix(nums.size());
        suffix[nums.size() - 1]=prod2;
        for(int i = nums.size()-2; i>=0; --i){
            suffix[i] = suffix[i+1]*nums[i+1];
        }

        vector<int> ans;
        for(int i = 0; i<nums.size(); ++i){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }
};
