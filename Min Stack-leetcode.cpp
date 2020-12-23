// link: https://leetcode.com/problems/min-stack/

class MinStack {
public:
    /** initialize your data structure here. */
    int key=-1;
    int stack[7500];
    MinStack() {
        // public:
        // top=-1;
        // int stack[100];
    }
    
    void push(int x) {
        key++;
        stack[key]=x;
        
    }
    
    void pop() {
        // if(key==-1)
        //     return NULL;
        key--;
    }
    
    int top() {
        if(key==-1)
            return NULL;
        return stack[key];
        
    }
    
    int getMin() {
        int small=stack[0],tempmin=key;
        for(int i=0;i<key;i++){
        if(stack[tempmin]<small)
            small=stack[tempmin];
        tempmin--;
        }
        return small;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
