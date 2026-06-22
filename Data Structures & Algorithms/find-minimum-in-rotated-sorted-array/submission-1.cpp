class Solution {
public:
    int findMin(vector<int> &nums) {
        int lo = 0;
        int hi = nums.size()-1;

        while(hi-lo>1){
            int mid = (hi+lo)/2;
            if(nums[mid] < nums[hi]){
                hi = mid;
            }
            else {
                lo = mid+1;
            }
        }

        if(nums[hi]>nums[lo]){
            return nums[lo];
        } else return nums[hi];
        
    }
};
