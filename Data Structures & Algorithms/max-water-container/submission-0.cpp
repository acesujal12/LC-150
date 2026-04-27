class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int maxArea= -1;

        while(l<r){
            int area= min(heights[l], heights[r]) * (r-l);

            if(heights[l] >= heights[r]){
                r--;
            }

            else{
                l++;
            }

            maxArea = max(area, maxArea);
        }

        return maxArea;
        
    }
};
