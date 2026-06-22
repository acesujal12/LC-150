class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi = nums.size()-1;

        while(hi-lo>1){
            int mid = (hi+lo)/2;
            if(nums[lo] < nums[mid]){
                if(nums[lo] <= target && target <= nums[mid]){
                    hi=mid;
                }
                else lo = mid;
            } else {
                if(nums[mid] <= target && target <= nums[hi]){
                    lo = mid;
                } else hi = mid;
            }
        }
        if(nums[hi] == target){
            return hi;
        }
        else if(nums[lo] == target){
            return lo;
        } else return -1;
    }
};