/*
Implement Queue using Stacks
由题意，用栈的基本操作来实现队列的基本操作，栈的基本操作：s.empty()、s.push()、s.top()、
s.pop()。根据栈和队列的特点，我们需要用两个栈来实现，最开始只想用一个栈作为接收栈，另一个
作为缓存栈，可是后面的pop和peek操作已经改变了两个栈的内容，第一个单纯的只想做接收栈已经不
行了，导致了提交错误，代码如下：
*/
class Queue {
public:
    stack<int> temp,receive;
    // Push element x to the back of queue.
    void push(int x) {
        receive.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(receive.empty()){
            temp.push(receive.top());
            receive.pop();
        }
       temp.pop();
    }

    // Get the front element.
    int peek(void) {
        int ret;
        while(receive.empty()){
            temp.push(receive.top());
            receive.pop();
        }
        ret=temp.top();
        return ret;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if(receive.empty()&&temp.empty()){
            return true;
        }else{
            return false;
        }
    }
};

后来换种思想，从一开始进栈的时候就把元素逆过来，后面的操作就可以很简单的按栈的基本操作即可。代码如下：
class Queue {
public:
    stack<int> receive;
    // Push element x to the back of queue.
    void push(int x) {
        stack<int> temp;
        while(!receive.empty()){
            temp.push(receive.top());
            receive.pop();
        }
        receive.push(x);
        while(!temp.empty()){
            receive.push(temp.top());
            temp.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
       receive.pop();
    }

    // Get the front element.
    int peek(void) {
        return receive.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return receive.empty();
    }
};

同理，用队列的基本操作[q.empty()、q.push()、q.front()、q.pop()]实现栈的基本操作代码如下：
class Stack {
public:
    queue<int> receive;
    // Push element x onto stack.
    void push(int x) {
        queue<int> temp;
        while(!receive.empty()){
            temp.push(receive.front());
            receive.pop();
        }
        receive.push(x);
        while(!temp.empty()){
            receive.push(temp.front());
            temp.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        receive.pop();
    }

    // Get the top element.
    int top() {
        return receive.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return receive.empty();
    }
};
