class Solution {
public:
    int func(int i, vector<int>& nums, vector<int>& dp){
        if(i>=nums.size()){
            return 0;
        }

        if(dp[i] != -1) return dp[i];

        return dp[i] = max(func(i+2, nums, dp) + nums[i], // either choose to rob the i th house
                    func(i+1, nums, dp)); // or choose not to rob i th house and just move onto the next house which is i + 1;

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return func(0, nums, dp);
    }
};