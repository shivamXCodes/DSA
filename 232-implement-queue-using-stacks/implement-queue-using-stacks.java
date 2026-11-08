class MyQueue {
    Stack<Integer> mainStack;
    Stack<Integer> helperStack;
    int top;
    public MyQueue() {
        mainStack = new Stack<>();
        helperStack = new Stack<>();
    }
    
    public void push(int x) {
        while(!mainStack.empty()){
            int ele = mainStack.pop();
            helperStack.push(ele);
        }
        mainStack.push(x);
        while(!helperStack.empty()){
            mainStack.push(helperStack.pop());
        }
    }
    
    public int pop() {
        return mainStack.pop();
    }
    
    public int peek() {
        return mainStack.peek();
    }
    
    public boolean empty() {
        return mainStack.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */