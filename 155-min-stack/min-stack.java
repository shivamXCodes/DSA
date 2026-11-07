class MinStack {
    Stack<Integer> fst;
    Stack<Integer> sst;
    int top;
    int min;
    public MinStack() {
        fst = new Stack<Integer>();
        sst = new Stack<Integer>();
        min = Integer.MAX_VALUE;
    }
    
    public void push(int value) {
        fst.push(value);
        if(sst.empty()){
            sst.push(value);
        }else if(value<=sst.peek()){
            sst.push(value);
        }
    }
    
    public void pop() {
        if(!fst.empty()){
        int element = fst.pop();
        if(element==sst.peek()){
            sst.pop();
        }
        }else{
            System.out.println("Stack is empty!");
        }
    }
    
    public int top() {
        return fst.peek();
    }
    
    public int getMin() {
        if(!sst.empty()){
            
        }
        return sst.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */