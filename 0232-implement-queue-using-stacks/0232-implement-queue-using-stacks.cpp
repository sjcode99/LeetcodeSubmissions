class MyQueue {
public:
    stack<int> one, two;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!one.empty()){
            two.push(one.top());
            one.pop();
        }
        one.push(x);
        while(!two.empty()){
            one.push(two.top());
            two.pop();
        }
    }
    
    int pop() {
        int val = one.top();
        one.pop();
        return val;
    }
    
    int peek() {
        return one.top();
    }
    
    bool empty() {
        return one.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */