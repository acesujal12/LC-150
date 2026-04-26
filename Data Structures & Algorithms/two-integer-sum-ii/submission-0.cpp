#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int l = 0;
        int r = 1;
        int sum =0;
        while(l<r && r<numbers.size()){
            if(numbers[l] + numbers[r] == target){
                ans.push_back(l+1);
                ans.push_back(r+1);
            }
            l++;
            r++;
        }
        return ans;

    }
};
