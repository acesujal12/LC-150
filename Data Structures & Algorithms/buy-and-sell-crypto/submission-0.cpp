class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }
        int boolean=false;
        for(int i = 0; i<prices.size()-1; i++){
            if(prices[i] < prices[i+1]){
                boolean = true;
                break;
            }
        }
        if(boolean == false){
            return 0;
        }
        else{
            int maxm = -1;
            int l=0;
            int r = 1;
            while(r < prices.size())
            {
                if(prices[r] - prices[l] > 0){
                    maxm = max(maxm, prices[r] - prices[l]);
                }
                else l=r;
                r++;
            }
            return maxm;
        }
    }
};
