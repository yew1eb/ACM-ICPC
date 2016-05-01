class MinStack {
private:
    stack<int> st;
    stack<int> stm;
public:
    void push(int x) {
        st.push(x);
        if( stm.empty() || x <= stm.top()) stm.push(x);
    }

    void pop() {
        int Top = st.top(); 
        st.pop();
        if(Top <= stm.top()) stm.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return stm.top();
    }
};