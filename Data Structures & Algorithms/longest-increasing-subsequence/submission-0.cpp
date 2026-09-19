class Solution {
public:
int func(int i, vector<int>& nums, vector<int>& dp){
    if(i <= 0) return 1;
    if(dp[i] != -1) return dp[i];

    int ans = 1;
    for(int j = 0; j<i; j++){
        if(nums[j] < nums[i]){
            ans = max(ans, func(j, nums, dp) + 1);
        }
    }
    return dp[i] = ans;
}
    int lengthOfLIS(vector<int>& nums) {
        int ans = INT_MIN;
        vector<int> dp(nums.size(), -1);

        for(int i = 0; i< nums.size(); i++){
            ans = max(func(nums.size() - i - 1, nums, dp), ans);
        }

        return ans;
    }
};
