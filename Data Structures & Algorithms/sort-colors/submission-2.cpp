class Solution {
public:
     void sortColors(vector<int>& nums) {
        int zeroes=0, ones=0,twos=0; 
        for(auto it : nums){
            if(it == 0){
                zeroes++;
            } else if (it == 1){
                ones++;
            } else twos++;
        }

        int i =0;
            while(true){
                if(zeroes == 0){
                    break;
                    }
                nums[i] = 0; 
                zeroes--;
                i++; 
                }
            while(true){
                if(ones == 0){
                    break;
                    }
                nums[i] = 1; 
                ones--; i++;
            }
            while(true){
                if(twos == 0){
                    break;
                    }
                nums[i] = 2; 
                twos--; i++; 
                }
        
    }
};