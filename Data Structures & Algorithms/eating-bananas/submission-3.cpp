class Solution {
public:

    int calchrs(int k, vector<int> piles){
        int hrs=0;
        for(int i = 0; i<piles.size(); i++){
            hrs+= ceil((double)piles[i]/k);
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int mx = INT_MIN;

        for(int i = 0; i<piles.size(); ++i){
            mx = max(mx, piles[i]);
        }
        
        int l = 1;
        int r = mx;

        while(r-l > 1){
            int mid = l+(r-l)/2;

            if(calchrs(mid, piles) > h){
                l = mid;
            } else if(calchrs(mid, piles) <= h){
                r = mid;
            } 
        }

        if(calchrs(l, piles) < h){
            return l;
        } else return r;
    }
};
