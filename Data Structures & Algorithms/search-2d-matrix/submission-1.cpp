class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        int hi = matrix.size()-1;

        while(hi - lo > 1){
            int mid = (lo + hi)/2;
            if(matrix[mid][0]<=target){
                lo = mid;
            }
            else hi = mid-1;
        }
        int row;

        if(matrix[hi][0] <= target)
            row = hi;
        else if(matrix[lo][0] <= target)
            row = lo;
        else return false;

        int lo1= 0;
        int hi1= matrix[row].size()-1;

        while(hi1 - lo1>1){
            int mid=(hi1 + lo1)/2;
            if(target > matrix[row][mid]){
                lo1 = mid+1;
            }
            else hi1 = mid;
        }

        if(target == matrix[row][lo1]){
            return true;
        }
        else if (target ==matrix[row][hi1]){
            return true;
        }
        else return false;

    }
};
