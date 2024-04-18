class MinStack {
    vector<int> arr;
    int t;
public:
    MinStack(): arr(100000), t(-1) {

    }

    void push(int val) {
        if(t == -1){
            ++t;
            arr[t] = val;
            ++t;
            arr[t] = val;
        }else{
            int m = min(arr[t], val);
            ++t;
            arr[t] = val;
            ++t;
            arr[t] = m;
        }
    }

    void pop() {
        t -=2;
    }

    int top() {
        return arr[t - 1];
    }

    int getMin() {
        return arr[t];
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