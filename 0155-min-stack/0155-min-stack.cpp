class MinStack {
public:
    stack<int>s;
    stack<int>min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            min.push(val);
        }else{
            s.push(val);
            if(min.top() > val)
            {
                min.push(val);
            }else{
                min.push(min.top());
            }
        }
        
    }
    
    void pop() {
        s.pop();
        min.pop();
    }
    
    int top() {
        return (s.top());
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */