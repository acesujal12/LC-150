class Solution {
public:
    vector<vector<int>> pushsubset(vector<int>& nums, vector<int> &current, int idx, vector<vector<int>> &ans) {

        if(idx == nums.size()){
            ans.push_back(current);
            return ans;
        }

        pushsubset(nums, current, idx+1 , ans);
        current.push_back(nums[idx]);
        pushsubset(nums, current, idx+1 , ans);
        current.pop_back();

        return ans;

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> ans;

        return pushsubset(nums,current, 0,ans);
    }
};


/*
Variables:
nums    -> Original array.
current -> Subset currently being built.
idx     -> Index of the element currently being considered.
ans     -> Stores all generated subsets.

Recursion:
For every nums[idx], we have 2 choices:
1. Don't take nums[idx] -> move to idx + 1.
2. Take nums[idx]    -> add it to current, then move to idx + 1.

When idx == nums.size(), all elements have been considered,
so current is a complete subset and is added to ans.

After exploring the "take" branch, remove the element using
pop_back() to backtrack and restore current for other branches.

Example for [1,2,3]:
Each element gives 2 choices (take / don't take),
so there are 2^3 = 8 possible subsets.
*/