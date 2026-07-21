class StockSpanner {
public:
stack<pair<int, int>> res;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct = 1;
        while(!res.empty() && price >= res.top().first){
            ct+=res.top().second;
            res.pop();
        }
        res.push({price, ct});

        return ct;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */