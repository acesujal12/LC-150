class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> hsh;

        for(int i = 0; i<nums.size(); i++){
            hsh[nums[i]]++;
        }
        int ans;
        for(int j=0;j<nums.size(); j++){
            if(hsh.find(j+1) == hsh.end()){
                return j+1;
                 break;
            }
        } 

        }
};