class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        for(auto &stone : stones){
            maxHeap.push(stone);
        }

        while(maxHeap.size()>1){
            int x = maxHeap.top();
            maxHeap.pop();
            int y = maxHeap.top();

            if(x==y) {
                maxHeap.pop();
            }
            else {
                maxHeap.pop();
                maxHeap.push(abs(x-y));
            }
        }
        if(maxHeap.empty()){
            return 0;
        }
        return maxHeap.top();
    }
};
