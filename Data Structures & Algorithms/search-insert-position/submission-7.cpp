class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;

        while(r-l>1){
            int mid = l + (r-l)/2;
            if(nums[mid] > target){
                r = mid;
            } else l = mid;
        }

        if(target <= nums[l]){
            return l;
        }

        if(target <= nums[r]){
            return r;
        } 

        return r+1;

        
    }
};