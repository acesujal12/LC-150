class Solution {
public:
    int func1(int i, vector<int>& nums, vector<int>& dp1){
        if(i >= nums.size()-1) return 0;

         if(dp1[i] != -1) return dp1[i];

        return dp1[i] = max(func1(i+2, nums, dp1) + nums[i], func1(i+1, nums, dp1));
    }
    int func2(int i, vector<int>& nums, vector<int>& dp2){
        if(i >= nums.size()) return 0;

        if(dp2[i] != -1) return dp2[i];

        return dp2[i] = max(func2(i+2, nums, dp2) + nums[i], func2(i+1, nums, dp2));
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);

        vector<int> dp1(nums.size(), -1);
        vector<int> dp2(nums.size(), -1);
        return max(func1(2, nums, dp1) + nums[0], func2(1, nums, dp2));
    }
};
