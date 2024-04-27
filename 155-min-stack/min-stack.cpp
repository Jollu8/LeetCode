class MinStack {
    stack<int> st;
    stack<int> m;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int x = st.empty() ? val : min(val, m.top());
        st.push(val);
        m.push(x);
    }
    
    void pop() {
        m.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m.top();
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