class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int mx = INT_MIN;
        int nse;
        int pse;
        int element;
        for(int i = 0; i<heights.size(); i++){
            while(!s.empty() && heights[i] < heights[s.top()]){
                nse = i;
                element = heights[s.top()];
                s.pop();
                if(s.empty()){
                    pse = -1;
                } else pse = s.top();
                mx= max(mx, element*(nse-pse-1));
            }
            s.push(i);
        }

        while(!s.empty()){
            nse = heights.size();

            element = heights[s.top()];
            s.pop();
            if(s.empty()){
                pse = -1;
            } else pse = s.top();

            mx = max(mx, element*(nse-pse-1));
        }
        return mx;
    }
};