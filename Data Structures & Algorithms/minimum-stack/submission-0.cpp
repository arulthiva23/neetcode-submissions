class MinStack {
public:
    stack<int> stk;
    MinStack() {  
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        if (!stk.empty()){
            stk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        stack<int> temp_stk(stk);
        int min_val = temp_stk.top();
        while(temp_stk.size()){
            min_val = min(min_val, temp_stk.top());
            temp_stk.pop();
        }
        return min_val;

    }
};
