class Solution {
public:
void combinations(vector<int>& arr, vector<vector<int>>& ans, vector<int>& current, int k, int idx){
    if(current.size() == k){
        ans.push_back(current);
        return;
    }

    for(int i = idx; i< arr.size(); i++){
        if(current.size()>k) break;
        current.push_back(arr[i]);
        combinations(arr, ans, current, k, i+1);
        current.pop_back();
    }

    return;
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<int> arr;

        for(int i = 1; i<=n; i++){
            arr.push_back(i);
        }

        combinations(arr, res, curr, k, 0);

        return res;
    }
};