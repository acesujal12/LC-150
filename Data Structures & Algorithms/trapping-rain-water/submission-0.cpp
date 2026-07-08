class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax;
        prefixMax.push_back(height[0]);
        for(int i = 1; i< height.size(); i++){
            prefixMax.push_back(max(prefixMax[i-1], height[i]));
        }
        vector<int> suffixMax(height.size());
        suffixMax[height.size()-1] = height[height.size()-1];
        for(int i = height.size()-2; i>=0 ; --i){
            suffixMax[i] = max(suffixMax[i+1], height[i]);
        }

        int leftMax, rightMax;
        int res=0;

        for(int i = 0; i<height.size(); i++){
            leftMax = prefixMax[i];
            rightMax = suffixMax[i];

            res += min(leftMax, rightMax) - height[i];
        }

        return res;
    }
};
