class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());

        int ct=0;

        for(int i = 0; i<nums.size()-1; i++){
            if(ct == k){
                return nums[i-1];
            }
            ct++;
        }
    }
};
