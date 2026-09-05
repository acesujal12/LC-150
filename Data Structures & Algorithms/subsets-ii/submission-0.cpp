class Solution {
public:
    void subsets(vector<int>& current, int idx, vector<int> nums, vector<vector<int>>& ans){
        ans.push_back(current);

        for(int i = idx; i<nums.size(); i++){
            if(i != idx && nums[i] == nums[i-1]) continue;

            current.push_back(nums[i]);
            subsets(current, i+1, nums, ans);
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> current;

        subsets(current, 0, nums, ans);

        return ans;

    }
};
