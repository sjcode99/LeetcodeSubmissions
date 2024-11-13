class MyStack {
public:
    queue<int> q;
    int el;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        el = x;
    }
    
    int pop() {
        if(q.empty()) return 0;
        
        int n = q.size();
        while(n>1){
            this->push(q.front());
            q.pop();
            n--;
        }
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return el;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */