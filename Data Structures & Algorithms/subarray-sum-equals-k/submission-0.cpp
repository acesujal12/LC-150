class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix;
        prefix[0] = 1;
        int count = 0;

        int sum=0;

        for(int i = 0; i<nums.size(); i++){
            sum = sum+nums[i];
            int complement = sum -k;
            if(prefix.find(complement) != prefix.end()){
                count += prefix[complement];
            }
            prefix[sum]++;
        }
        return count;

    }
};