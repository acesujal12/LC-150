class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>> maxHeap;

        for(int i = 0; i<points.size(); i++){
            for(int j = 1;j<points[i].size(); j++){
                int dist = points[i][j]*points[i][j]  + points[i][j-1]*points[i][j-1];
                maxHeap.push({dist, {points[i][j-1], points[i][j]}});
            }
            if(maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        vector<vector<int>> res;

        while(!maxHeap.empty()){
            res.push_back({maxHeap.top().second.first, maxHeap.top().second.second});
            maxHeap.pop();
        }

        return res;
    }
};
