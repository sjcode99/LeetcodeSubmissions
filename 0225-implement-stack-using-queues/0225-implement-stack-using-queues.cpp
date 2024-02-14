class MyStack {
public:
    queue<int> q;
    int topel;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        topel = x;
    }
     
    int pop() {
        if(empty()) return 0;
        int size = q.size();
        while(size > 1){
            this->push(q.front());
            q.pop();
            size--;
        }
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return topel;
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