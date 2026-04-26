#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(l < r){
            int currentSum = numbers[l] + numbers[r];
            if(target == currentSum){
                return {l+1, r+1};
            }
            else if(target > currentSum){
                ++l;
            }
            else{
                r--;
            }
        }
    }
};
