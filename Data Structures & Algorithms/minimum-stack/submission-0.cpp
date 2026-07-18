class MinStack {
public:

    stack<int> s;
    stack<int> min;
    int mini;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            mini = val;
            s.push(val);
            min.push(mini);
        } else if(min.top()>val){
            mini = val;
            s.push(val);
            min.push(mini);
        } else {
            s.push(val);
            min.push(min.top());
        }
    }
    
    void pop() {
        s.pop();
        min.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};
