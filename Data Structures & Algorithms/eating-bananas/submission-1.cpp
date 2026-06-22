class Solution {
public:
    int calcHrs(int x, vector<int>& piles){
        int hrs=0;
        for(int i=0; i<piles.size(); i++){
            hrs += ceil((double)piles[i]/x);
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo= 1;
        int mxm = -1;
        for(auto i : piles){
            mxm = max(mxm, i);
        }
        int hi = mxm;

        while(hi-lo>1){
            int mid= (hi+lo)/2;

            if(calcHrs(mid, piles) <= h){
                hi=mid;
            } else lo = mid+1;
        }
        if(calcHrs(lo,piles) <= h){
            return lo;
        } else return hi;
    }
};
