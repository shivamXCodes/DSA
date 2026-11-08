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
        if(helperStack.empty()){
            while(!mainStack.empty()){
           helperStack.push(mainStack.pop());
        }
        }
        return helperStack.pop();
       
    }
    
    public int peek() {
         if(helperStack.empty()){
            while(!mainStack.empty()){
           helperStack.push(mainStack.pop());
        }
        }
        return helperStack.peek();
    }
    
    public boolean empty() {
        return (mainStack.empty()== true) && (helperStack.empty()==true);
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