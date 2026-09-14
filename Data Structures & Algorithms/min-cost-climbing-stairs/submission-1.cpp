class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int cost1 = cost[0];
        int cost2 = cost[1];

        for(int i = 2; i < cost.size(); i++){
            int mincost = min(cost1 + cost[i], cost2 + cost[i]);
            cost1 = cost2;
            cost2 = mincost;
        }

        return min(cost2, cost1);
    }
};
