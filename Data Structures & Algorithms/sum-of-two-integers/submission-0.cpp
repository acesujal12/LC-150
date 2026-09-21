class Solution {
public:
    int getSum(int a, int b) {
        int one = 0;
        if(a>0){
            for(int i = 0; i<a;i++){
                one++;
            }
        } else {
            for(int i = 0; i>a;i--){
                one--;
            }
        }
        if(b>0){
            for(int i = 0; i<b;i++){
                one++;
            }
        } else {
            for(int i = 0; i>b;i--){
                one--;
            }
        }
        return one;
    }
};