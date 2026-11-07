class MinStack {
private: 
    stack<pair<int,int>> st;

public:
    MinStack() {}
    
    void push(int val) {
        int m;
        if(st.empty())
            m = val;
        else
            m = min(st.top().second, val);
        st.push({val, m});
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
