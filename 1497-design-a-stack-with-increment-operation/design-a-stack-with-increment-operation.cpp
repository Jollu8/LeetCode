int speed = [] {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class CustomStack {
    std::vector<int> m_arr;
    std::size_t capacity;
  
public:
    CustomStack(int m): capacity(m){
        
    }
    
    void push(int x) {
        if(m_arr.size() < capacity ){
            m_arr.push_back(x);
        }
    }
    
    int pop() {
        if(!m_arr.empty()) {
            auto tmp = m_arr.back();
            m_arr.pop_back();
            return tmp;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int j = k;
        for(auto i = 0; i < m_arr.size() && j > 0; ++i, --j) {
            m_arr[i] += val;
        }        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */