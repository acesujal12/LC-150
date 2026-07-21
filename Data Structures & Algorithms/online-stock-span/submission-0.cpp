class StockSpanner {
public:
stack<int> res;
    StockSpanner() {
        
    }
    
    int next(int price) {

        stack<int> s = res;
        int ct = 1;
        // if(res.empty()){
        //     return false;
        // }
        while(!res.empty() && price >= res.top()){
            res.pop();
            ct++;
        }
        res = s;
        res.push(price);

        return ct;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */