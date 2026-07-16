class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        if(k==1){
            return nums;
        }
        int maxm = INT_MIN;
        vector<int> res;
        for(int i =0; i<k; i++){
            maxm = max(maxm, nums[i]); 
        }
        res.push_back(maxm);

        int l=0;
        int r = k-1;

        while(r<nums.size()){
            r++;
            if(r==nums.size()){
                break;
            }
            if(nums[r] < maxm && maxm==nums[l]){
                maxm = INT_MIN;
                for(int i =l+1; i<r+1; i++){
                    maxm = max(maxm, nums[i]); 
                }
                res.push_back(maxm);
            } else if(nums[r] > maxm){
                maxm=nums[r];
                res.push_back(nums[r]);
            } else res.push_back(maxm);
            l++;
        }
        return res;
    }
};
