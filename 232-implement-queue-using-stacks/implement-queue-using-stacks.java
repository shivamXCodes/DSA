class MyQueue {
    Stack<Integer> mainStack;
    Stack<Integer> helperStack;
    int top;
    public MyQueue() {
        mainStack = new Stack<>();
        helperStack = new Stack<>();
    }
    
    public void push(int x) {
        mainStack.push(x);
    }
    
    public int pop() {
        while(!mainStack.empty()){
        helperStack.push(mainStack.pop());
        }
        int ele = helperStack.pop();
        while(!helperStack.empty()){
            mainStack.push(helperStack.pop());
        }
        return ele;
    }
    
    public int peek() {
        while(!mainStack.empty()){
        helperStack.push(mainStack.pop());
        }
        int ele = helperStack.peek();
        while(!helperStack.empty()){
            mainStack.push(helperStack.pop());
        }
        return ele;
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