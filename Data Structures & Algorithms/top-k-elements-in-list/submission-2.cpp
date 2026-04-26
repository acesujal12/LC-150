class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hsh;
        for(int i = 0; i<nums.size(); i++){
                hsh[nums[i]]++;
             }

        vector <pair <int, int>> ans;
        for(auto& pair : hsh){
            ans.push_back({pair.second, pair.first});
        }

        sort(ans.rbegin(), ans.rend());

        vector <int> ans2;
        for(int i = 0; i <k; ++i){
            ans2.push_back(ans[i].second);
        }

        return ans2;
    }
        
};
