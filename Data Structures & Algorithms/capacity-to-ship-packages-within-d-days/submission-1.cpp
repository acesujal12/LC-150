class Solution {
public:

    int calcdays(int capacity, vector<int> &weights){
        int days=0;
        int sum = 0;
        for(int i = 0; i<weights.size(); i++){
            sum+=weights[i];
            if(sum >capacity){
                days++;
                sum=0;
                sum += weights[i];
            }
        }
        return days+1;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int mx=INT_MIN;
        for(auto &weight : weights){
            mx = max(mx, weight);
            sum+=weight;
        }
        int l = mx; // we put l = max, of weights because we cannot have capacity less than the maximum weight. We can also put l = 1, because it will be anyhow eleminated by binary search but under one specific test case it fails. Try to do that and dry run it.
        int r = sum;

        while(r-l>1){
            int mid = l +(r-l)/2;

            if(calcdays(mid, weights) >days){
                l = mid;
            } else if(calcdays(mid, weights) <= days){
                r = mid;
            }
        }
        if(calcdays(l, weights) <= days ){
            return l;
        } else return r;
    }
};