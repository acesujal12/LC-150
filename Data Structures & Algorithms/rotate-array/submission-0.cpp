class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int rotations = 0;
        while(rotations!= k){
            int l = 0;
            int r = nums.size() -1;

            int num = nums[l];

            nums[l] = nums[r];

            for(int i =nums.size()-1; i>1; i--){
                nums[i] = nums[i-1];
            }
            nums[1] = num;

            rotations++;

        }
    }
};