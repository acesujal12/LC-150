class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hsh;

        for(int i = 0; i<nums.size(); i++){

            if(hsh.count(nums[i])){
                if(i - hsh[nums[i]] <= k){
                    return true;
                }
            }

            hsh[nums[i]] = i;
        }

        return false;
    }
};