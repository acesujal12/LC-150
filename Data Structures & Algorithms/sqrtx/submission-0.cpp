class Solution {
public:

    int mySqrt(int x) {

        if(x==1){
            return 1;
        }

        int l = 0;
        int r = x;

        while(r-l>1){
            double mid = l+(r-l)/2;

            if(mid*mid > x){
                r = mid;
            } 
            else l = mid;
        }
        
        return l;
    }
};