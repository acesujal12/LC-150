class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size(); i++){
            int l = i+1;
            int r = nums.size() -1;
            if(nums[i] == nums[i+1]){
                i++;
            }

            while (l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    r--;
                    l++;

                    while(nums[l] == nums[l+1]){ l++;}

                    while(nums[r] == nums[r-1]){ --r;}

                    continue;
                }

                else if (0 > nums[i] + nums[l] + nums[r]){
                    l++;
                }
                else --r;
            }
        }
        return ans;
    }
};
