class Solution {
public:
    bool func(int i, int sum, int target, vector<int>& nums, vector<vector<int>>& dp){
        if(sum == target) return true;
        if(sum > target) return false;
        if(i >= nums.size()) return false;

        if(dp[i][sum] != -1) return dp[i][sum];

        bool ans = false;

        for(int j = i; j>=0; --j){
            if(func(j-1, sum + nums[j], target, nums, dp)){
                ans = true;
                break;
            }
        }

        return dp[i][sum] = ans;

    }
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for(auto& num : nums){
            total+=num;
        }

        if(total % 2 != 0) return false;

        int target = total/2;
        vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));

        return func(nums.size()-1, 0, target, nums, dp);

    }
};
